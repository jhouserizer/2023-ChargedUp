// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandHelper.h>
#include <frc2/command/SequentialCommandGroup.h>

// Command includes
#include "commands/ExampleCommand.h"
#include "commands/CmdShiftGear.h"

// Autonomous commands

// Subsystem includes
#include "subsystems/ExampleSubsystem.h"
#include "subsystems/SubDriveTrain.h"
#include "subsystems/SubPneumatics.h"
#include "subsystems/SubLimeLight.h"


class AutoCmdAutonomous
    : public frc2::CommandHelper<frc2::SequentialCommandGroup, AutoCmdAutonomous> {
 public:
  AutoCmdAutonomous(SubLimeLight* subLimelight, SubDriveTrain* subDriveTrain);
};