/*
 * Off-the-Record Messaging (OTR) modules for IRC
 *
 * Copyright (C) - 2012  David Goulet <dgoulet@ev0ke.net>
 *                 2014  Alexander Færøy <ahf@0x90.dk>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA 02110-1301,USA
 */

#ifndef IRSSI_OTR_FORMATS_H
#define IRSSI_OTR_FORMATS_H

#include "formats.h"

/*
 * Must be in sync with the fe_otr_formats array.
 */
enum otr_status_format {
	TXT_OTR_MODULE_NAME,

	/* Status bar format. */
	TXT_OTR_FILL_1,
	TXT_OTR_STB_PLAINTEXT,
	TXT_OTR_STB_FINISHED,
	TXT_OTR_STB_UNKNOWN,
	TXT_OTR_STB_UNTRUSTED,
	TXT_OTR_STB_TRUST,

	/* OTR format. */
	TXT_OTR_FILL_2,
	TXT_OTR_AUTH_ABORTED,
	TXT_OTR_AUTH_INITIATED,
	TXT_OTR_AUTH_ONGOING_ABORTED,
	TXT_OTR_AUTH_RESPONSE,

	TXT_OTR_CTX_LIST_HEADER,
	TXT_OTR_CTX_LIST_ENCRYPTED_LINE,
	TXT_OTR_CTX_LIST_FINISHED_LINE,
	TXT_OTR_CTX_LIST_MANUAL_LINE,
	TXT_OTR_CTX_LIST_PLAINTEXT_LINE,
	TXT_OTR_CTX_LIST_SMP_LINE,
	TXT_OTR_CTX_LIST_UNKNOWN_LINE,
	TXT_OTR_CTX_LIST_UNUSED_LINE,
	TXT_OTR_CTX_LIST_UNVERIFIED_LINE,
	TXT_OTR_CTX_LIST_FOOTER,
	TXT_OTR_CTX_MISSING,
	TXT_OTR_CTX_NICK_MISSING,

	TXT_OTR_FP_ALREADY_DISTRUSED,
	TXT_OTR_FP_ALREADY_TRUSTED,
	TXT_OTR_FP_CTX_ENCRYPTED,
	TXT_OTR_FP_DISTRUSTED,
	TXT_OTR_FP_FORGOTTEN,
	TXT_OTR_FP_INFO,
	TXT_OTR_FP_MISSING,
	TXT_OTR_FP_NICK,
	TXT_OTR_FP_TRUSTED,

	TXT_OTR_KEYGEN_COMPLETED,
	TXT_OTR_KEYGEN_FAILED,
	TXT_OTR_KEYGEN_RUNNING,
	TXT_OTR_KEYGEN_STARTED,

	TXT_OTR_KEYS_UNAVAILABLE,

	TXT_OTR_MSG_ENCRYPTION_ENDED,
	TXT_OTR_MSG_ENCRYPTION_ERROR,
	TXT_OTR_MSG_ENCRYPTION_REQUIRED,
	TXT_OTR_MSG_ERROR,
	TXT_OTR_MSG_GENERAL_ERROR,
	TXT_OTR_MSG_MALFORMED,
	TXT_OTR_MSG_NOT_IN_PRIVATE,
	TXT_OTR_MSG_REFLECTED,
	TXT_OTR_MSG_RESENT,
	TXT_OTR_MSG_UNENCRYPTED,
	TXT_OTR_MSG_UNREADABLE,
	TXT_OTR_MSG_UNRECOGNIZED,

	TXT_OTR_SESSION_ALREADY_FINISHED,
	TXT_OTR_SESSION_ALREADY_SECURED,
	TXT_OTR_SESSION_FINISHED,
	TXT_OTR_SESSION_FINISHING,
	TXT_OTR_SESSION_INITIATING,
	TXT_OTR_SESSION_INSECURE,
	TXT_OTR_SESSION_MISSING,
	TXT_OTR_SESSION_SECURE,
	TXT_OTR_SESSION_UNAUTHENTICATED_WARNING,

	TXT_OTR_SMP_ANSWER_FOOTER,
	TXT_OTR_SMP_ANSWER_HEADER,
	TXT_OTR_SMP_ANSWER_QUESTION,
	TXT_OTR_SMP_FAILURE,
	TXT_OTR_SMP_IN_PROGRESS,
	TXT_OTR_SMP_SECRET_QUESTION,
	TXT_OTR_SMP_SUCCESS
};

extern FORMAT_REC fe_otr_formats[];

#endif /* IRSSI_OTR_FORMATS_H */
