//
// The developer of the original code and/or files is Tripwire, Inc.
// Portions created by Tripwire, Inc. are copyright (C) 2000-2017 Tripwire,
// Inc. Tripwire is a registered trademark of Tripwire, Inc.  All rights
// reserved.
// 
// This program is free software.  The contents of this file are subject
// to the terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2 of the License, or (at your
// option) any later version.  You may redistribute it and/or modify it
// only in compliance with the GNU General Public License.
// 
// This program is distributed in the hope that it will be useful.
// However, this program is distributed AS-IS WITHOUT ANY
// WARRANTY; INCLUDING THE IMPLIED WARRANTY OF MERCHANTABILITY OR FITNESS
// FOR A PARTICULAR PURPOSE.  Please see the GNU General Public License
// for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.
// 
// Nothing in the GNU General Public License or any other license to use
// the code or files shall permit you to use Tripwire's trademarks,
// service marks, or other intellectual property without Tripwire's
// prior written consent.
// 
// If you have any questions, please contact Tripwire, Inc. at either
// info@tripwire.org or www.tripwire.org.
//
///////////////////////////////////////////////////////////////////////////////
// fcoreportutil.h
//
// class cFCOReportUtil -- utility functions for the tripwire report class
//

#ifndef __FCOREPORTUTIL_H
#define __FCOREPORTUTIL_H

#ifndef __TYPES_H
#include "types.h"
#endif

#ifndef __TCHAR_H
#include "core/tchar.h"
#endif

class cFCOReport;
class cFCOReportHeader;
class cFCOReportGenreIter;

class cFCOReportUtil
{
public:
    static void CalculateHeaderInfo(    
                                        cFCOReportHeader&   reportHeader,
                                        const TSTRING&      policyFilename,
                                        const TSTRING&      configFilename,
                                        const TSTRING&      dbFilename,
                                        const TSTRING&      commandLineParams,
                                        int64               createTime,
                                        int64               lastDBUpdateTime  
                                   );

    static void FinalizeReport( cFCOReport& rr );
        // call this when you're done adding to the report.
        // adds any info propDisplayer needs, and adds info to header

private:
    static void InitPropDisplayer( cFCOReportGenreIter& gi );
        // call this to gather any info from machine that the report will need for displaying FCOs
};

#endif //__FCOREPORTUTIL_H

