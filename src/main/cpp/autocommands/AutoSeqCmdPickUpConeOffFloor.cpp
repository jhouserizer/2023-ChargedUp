// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "autocommands/AutoSeqCmdPickUpConeOffFloor.h"

// NOTE:  Consider using this command inline, rather than writing a subclass.
// For more information, see:
// https://docs.wpilib.org/en/stable/docs/software/commandbased/convenience-features.html
AutoSeqCmdPickUpConeOffFloor::AutoSeqCmdPickUpConeOffFloor(SubClawWrist* subClawWrist) {
  // Add your commands here, e.g.
  // AddCommands(FooCommand{}, BarCommand{});
  AddCommands(
    AutoCmdWristServoToPosition{subClawWrist, WRIST_CLAW_PICKUP_UPRIGHT_CONE_OFF_FLOOR, WRIST_CLAW_PICKUP_UPRIGHT_CONE_OFF_FLOOR-1},
    AutoSeqCmdPickUpConeOffFloor{subClawWrist},
    AutoCmdWristServoToPosition{subClawWrist, WRIST_CLAW_MIN_LIMIT, WRIST_CLAW_PICKUP_UPRIGHT_CONE_OFF_FLOOR-2}
  );
}
