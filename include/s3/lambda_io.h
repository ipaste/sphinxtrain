/* ====================================================================
 * Copyright (c) 1996-2000 Carnegie Mellon University.  All rights 
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * This work was supported in part by funding from the Defense Advanced 
 * Research Projects Agency and the National Science Foundation of the 
 * United States of America, and the CMU Sphinx Speech Consortium.
 *
 * THIS SOFTWARE IS PROVIDED BY CARNEGIE MELLON UNIVERSITY ``AS IS'' AND 
 * ANY EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL CARNEGIE MELLON UNIVERSITY
 * NOR ITS EMPLOYEES BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ====================================================================
 *
 */
/*********************************************************************
 *
 * File: lambda_io.h
 * 
 * Description: 
 * 
 * Author: 
 * 
 *********************************************************************/

#ifndef LAMBDA_IO_H
#define LAMBDA_IO_H

#ifdef __cplusplus
extern "C" 
#include <sphinxbase/prim_type.h>

#define LAMBDA_VERSION "0.1"

int
lambda_write(const char *fn,
	     float32 *lambda,
	     uint32 n_lambda,
	     const char *comment);

int
lambda_read(float32 **lambda,
	    uint32 *n_lambda,
	    const char **comment,
	    const char *fn);
	    
#define LAMBDA_ACC_VERSION "0.1"

int
lambda_acc_write(const char *fn,
		 float32 *lambda_acc,
		 uint32 n_lambda_acc,
		 const char *comment);

int
lambda_acc_read(float32 **lambda_acc,
		uint32 *n_lambda_acc,
		const char **comment,
		const char *fn);

#define LAMBDA_CNT_VERSION "0.1"

int
lambda_cnt_write(const char *fn,
		 uint32 *cnt,
		 uint32 n_cnt,
		 const char *comment);

int
lambda_cnt_read(uint32 **cnt,
		uint32 *n_cnt,
		const char **comment,
		const char *fn);


#ifdef __cplusplus
}
#endif
#endif /* LAMBDA_IO_H */ 


/*
 * Log record.  Maintained by RCS.
 *
 * $Log$
 * Revision 1.4  2004/07/21  17:46:09  egouvea
 * Changed the license terms to make it the same as sphinx2 and sphinx3.
 * 
 * Revision 1.3  2001/04/05 20:02:30  awb
 * *** empty log message ***
 *
 * Revision 1.2  2000/09/29 22:35:12  awb
 * *** empty log message ***
 *
 * Revision 1.1  2000/09/24 21:38:30  awb
 * *** empty log message ***
 *
 * Revision 1.1  1996/07/29  16:33:40  eht
 * Initial revision
 *
 *
 */
