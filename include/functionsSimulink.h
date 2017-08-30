//  ---------------------- Doxygen info ----------------------
//! \file functionsSimulink.h
//!
//! \brief
//! Header file for communicating with MATLAB/Simulink
//!
//! \details
//! The declarations here are for the functionsSimulink.cpp 
//!
//! \date July 2017
//!
//! \version 0.1
//!
//! \author Mahyar Abdeetedal, <mahyar.etedal@icloud.com> \n
//!
//! \copyright Copyright (C) 2016 - 2017 Mahyar Abdeetedal
//! \n
//! \n
//! <b>GNU  General Public License</b>
//! \n
//! \n
//! This file is part of the KUKA-UI.
//! \n\n
//! The KUKA-UI is free software: you can redistribute it and/or modify it
//! under the terms of the GNU  General Public License as published
//! by the Free Software Foundation, either version 3 of the License,
//! or (at your option) any later version.
//! \n\n
//! The KUKA-UI is distributed in the hope that it will be useful, 
//! but WITHOUT ANY WARRANTY; without even the implied warranty of
//! MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
//! the GNU  General Public License for more details.
//! \n\n
//! You should have received a copy of the GNU  General Public License
//! along with the KUKA-UI. If not, see
//! <http://www.gnu.org/licenses/>.

/* For more info and how to use this software, visit: http://www.etedal.net/p/kuka.html */


//  ---------------------- Doxygen info ----------------------
//! \fn void startSimulink(System::ComponentModel::BackgroundWorker^ workerSimulink, tFriMsrData& msr, niVec & recVec, phidgetsVec & phiVec, atiVec & atiVector, float *simulinkTrg)
//!
//! \brief
//! 
//!
//! \param workerSimulink
//! 
//!
//! \param msr
//! 
//!
//! \param recVec
//! 
//!
//! \param phiVec
//! 
//!
//! \param atiVector
//! 
//!
//! \param simulinkTrg
//! 
//!
//! \return
//! The output is a void.
//!
//  ----------------------------------------------------------
void startSimulink(System::ComponentModel::BackgroundWorker^ workerSimulink, tFriMsrData& msr, niVec & recVec, phidgetsVec & phiVec, atiVec & atiVector, float *simulinkTrg);