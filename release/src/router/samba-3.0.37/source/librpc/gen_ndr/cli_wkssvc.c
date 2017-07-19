/*
 * Unix SMB/CIFS implementation.
 * client auto-generated by pidl. DO NOT MODIFY!
 */

#include "includes.h"
#include "librpc/gen_ndr/cli_wkssvc.h"

NTSTATUS rpccli_wkssvc_NetWkstaGetInfo(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx, const char *server_name, uint32_t level, union wkssvc_NetWkstaInfo *info)
{
	struct wkssvc_NetWkstaGetInfo r;
	NTSTATUS status;
	
	/* In parameters */
	r.in.server_name = server_name;
	r.in.level = level;
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(wkssvc_NetWkstaGetInfo, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETWKSTAGETINFO, &r, (ndr_pull_flags_fn_t)ndr_pull_wkssvc_NetWkstaGetInfo, (ndr_push_flags_fn_t)ndr_push_wkssvc_NetWkstaGetInfo);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(wkssvc_NetWkstaGetInfo, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	*info = *r.out.info;
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_wkssvc_NetWkstaSetInfo(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx, const char *server_name, uint32_t level, union wkssvc_NetWkstaInfo *info, uint32_t *parm_error)
{
	struct wkssvc_NetWkstaSetInfo r;
	NTSTATUS status;
	
	/* In parameters */
	r.in.server_name = server_name;
	r.in.level = level;
	r.in.info = info;
	r.in.parm_error = parm_error;
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(wkssvc_NetWkstaSetInfo, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETWKSTASETINFO, &r, (ndr_pull_flags_fn_t)ndr_pull_wkssvc_NetWkstaSetInfo, (ndr_push_flags_fn_t)ndr_push_wkssvc_NetWkstaSetInfo);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(wkssvc_NetWkstaSetInfo, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	*parm_error = *r.out.parm_error;
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_wkssvc_NetWkstaEnumUsers(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx, const char *server_name, uint32_t level, union WKS_USER_ENUM_UNION *users, uint32_t prefmaxlen, uint32_t *entriesread, uint32_t *totalentries, uint32_t *resumehandle)
{
	struct wkssvc_NetWkstaEnumUsers r;
	NTSTATUS status;
	
	/* In parameters */
	r.in.server_name = server_name;
	r.in.level = level;
	r.in.users = users;
	r.in.prefmaxlen = prefmaxlen;
	r.in.resumehandle = resumehandle;
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(wkssvc_NetWkstaEnumUsers, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETWKSTAENUMUSERS, &r, (ndr_pull_flags_fn_t)ndr_pull_wkssvc_NetWkstaEnumUsers, (ndr_push_flags_fn_t)ndr_push_wkssvc_NetWkstaEnumUsers);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(wkssvc_NetWkstaEnumUsers, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	*users = *r.out.users;
	if (entriesread && r.out.entriesread) {
		*entriesread = *r.out.entriesread;
	}
	if (totalentries && r.out.totalentries) {
		*totalentries = *r.out.totalentries;
	}
	*resumehandle = *r.out.resumehandle;
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRWKSTAUSERGETINFO(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRWKSTAUSERGETINFO r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRWKSTAUSERGETINFO, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRWKSTAUSERGETINFO, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRWKSTAUSERGETINFO, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRWKSTAUSERGETINFO);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRWKSTAUSERGETINFO, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRWKSTAUSERSETINFO(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRWKSTAUSERSETINFO r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRWKSTAUSERSETINFO, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRWKSTAUSERSETINFO, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRWKSTAUSERSETINFO, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRWKSTAUSERSETINFO);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRWKSTAUSERSETINFO, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_wkssvc_NetWkstaTransportEnum(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx, const char *server_name, uint32_t *level, union wkssvc_NetWkstaTransportCtr *ctr, uint32_t max_buffer, uint32_t *totalentries, uint32_t *resume_handle)
{
	struct wkssvc_NetWkstaTransportEnum r;
	NTSTATUS status;
	
	/* In parameters */
	r.in.server_name = server_name;
	r.in.level = level;
	r.in.ctr = ctr;
	r.in.max_buffer = max_buffer;
	r.in.resume_handle = resume_handle;
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(wkssvc_NetWkstaTransportEnum, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETWKSTATRANSPORTENUM, &r, (ndr_pull_flags_fn_t)ndr_pull_wkssvc_NetWkstaTransportEnum, (ndr_push_flags_fn_t)ndr_push_wkssvc_NetWkstaTransportEnum);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(wkssvc_NetWkstaTransportEnum, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	*level = *r.out.level;
	*ctr = *r.out.ctr;
	if (totalentries && r.out.totalentries) {
		*totalentries = *r.out.totalentries;
	}
	*resume_handle = *r.out.resume_handle;
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRWKSTATRANSPORTADD(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRWKSTATRANSPORTADD r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRWKSTATRANSPORTADD, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRWKSTATRANSPORTADD, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRWKSTATRANSPORTADD, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRWKSTATRANSPORTADD);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRWKSTATRANSPORTADD, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRWKSTATRANSPORTDEL(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRWKSTATRANSPORTDEL r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRWKSTATRANSPORTDEL, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRWKSTATRANSPORTDEL, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRWKSTATRANSPORTDEL, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRWKSTATRANSPORTDEL);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRWKSTATRANSPORTDEL, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRUSEADD(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRUSEADD r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRUSEADD, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRUSEADD, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRUSEADD, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRUSEADD);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRUSEADD, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRUSEGETINFO(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRUSEGETINFO r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRUSEGETINFO, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRUSEGETINFO, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRUSEGETINFO, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRUSEGETINFO);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRUSEGETINFO, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRUSEDEL(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRUSEDEL r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRUSEDEL, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRUSEDEL, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRUSEDEL, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRUSEDEL);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRUSEDEL, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRUSEENUM(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRUSEENUM r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRUSEENUM, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRUSEENUM, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRUSEENUM, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRUSEENUM);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRUSEENUM, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRMESSAGEBUFFERSEND(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRMESSAGEBUFFERSEND r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRMESSAGEBUFFERSEND, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRMESSAGEBUFFERSEND, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRMESSAGEBUFFERSEND, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRMESSAGEBUFFERSEND);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRMESSAGEBUFFERSEND, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRWORKSTATIONSTATISTICSGET(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRWORKSTATIONSTATISTICSGET r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRWORKSTATIONSTATISTICSGET, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRWORKSTATIONSTATISTICSGET, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRWORKSTATIONSTATISTICSGET, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRWORKSTATIONSTATISTICSGET);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRWORKSTATIONSTATISTICSGET, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRLOGONDOMAINNAMEADD(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRLOGONDOMAINNAMEADD r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRLOGONDOMAINNAMEADD, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRLOGONDOMAINNAMEADD, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRLOGONDOMAINNAMEADD, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRLOGONDOMAINNAMEADD);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRLOGONDOMAINNAMEADD, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRLOGONDOMAINNAMEDEL(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRLOGONDOMAINNAMEDEL r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRLOGONDOMAINNAMEDEL, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRLOGONDOMAINNAMEDEL, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRLOGONDOMAINNAMEDEL, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRLOGONDOMAINNAMEDEL);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRLOGONDOMAINNAMEDEL, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRJOINDOMAIN(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRJOINDOMAIN r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRJOINDOMAIN, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRJOINDOMAIN, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRJOINDOMAIN, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRJOINDOMAIN);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRJOINDOMAIN, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRUNJOINDOMAIN(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRUNJOINDOMAIN r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRUNJOINDOMAIN, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRUNJOINDOMAIN, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRUNJOINDOMAIN, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRUNJOINDOMAIN);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRUNJOINDOMAIN, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRRENAMEMACHINEINDOMAIN(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRRENAMEMACHINEINDOMAIN r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRRENAMEMACHINEINDOMAIN, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRRENAMEMACHINEINDOMAIN, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRRENAMEMACHINEINDOMAIN, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRRENAMEMACHINEINDOMAIN);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRRENAMEMACHINEINDOMAIN, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRVALIDATENAME(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRVALIDATENAME r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRVALIDATENAME, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRVALIDATENAME, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRVALIDATENAME, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRVALIDATENAME);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRVALIDATENAME, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRGETJOININFORMATION(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRGETJOININFORMATION r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRGETJOININFORMATION, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRGETJOININFORMATION, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRGETJOININFORMATION, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRGETJOININFORMATION);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRGETJOININFORMATION, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRGETJOINABLEOUS(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRGETJOINABLEOUS r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRGETJOINABLEOUS, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRGETJOINABLEOUS, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRGETJOINABLEOUS, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRGETJOINABLEOUS);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRGETJOINABLEOUS, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_wkssvc_NetrJoinDomain2(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx, const char *server_name, const char *domain_name, const char *account_name, const char *admin_account, struct wkssvc_PasswordBuffer *encrypted_password, uint32_t join_flags)
{
	struct wkssvc_NetrJoinDomain2 r;
	NTSTATUS status;
	
	/* In parameters */
	r.in.server_name = server_name;
	r.in.domain_name = domain_name;
	r.in.account_name = account_name;
	r.in.admin_account = admin_account;
	r.in.encrypted_password = encrypted_password;
	r.in.join_flags = join_flags;
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(wkssvc_NetrJoinDomain2, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRJOINDOMAIN2, &r, (ndr_pull_flags_fn_t)ndr_pull_wkssvc_NetrJoinDomain2, (ndr_push_flags_fn_t)ndr_push_wkssvc_NetrJoinDomain2);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(wkssvc_NetrJoinDomain2, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_wkssvc_NetrUnjoinDomain2(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx, const char *server_name, const char *account, struct wkssvc_PasswordBuffer *encrypted_password, uint32_t unjoin_flags)
{
	struct wkssvc_NetrUnjoinDomain2 r;
	NTSTATUS status;
	
	/* In parameters */
	r.in.server_name = server_name;
	r.in.account = account;
	r.in.encrypted_password = encrypted_password;
	r.in.unjoin_flags = unjoin_flags;
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(wkssvc_NetrUnjoinDomain2, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRUNJOINDOMAIN2, &r, (ndr_pull_flags_fn_t)ndr_pull_wkssvc_NetrUnjoinDomain2, (ndr_push_flags_fn_t)ndr_push_wkssvc_NetrUnjoinDomain2);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(wkssvc_NetrUnjoinDomain2, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_wkssvc_NetrRenameMachineInDomain2(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx, const char *server_name, const char *NewMachineName, const char *Account, struct wkssvc_PasswordBuffer *EncryptedPassword, uint32_t RenameOptions)
{
	struct wkssvc_NetrRenameMachineInDomain2 r;
	NTSTATUS status;
	
	/* In parameters */
	r.in.server_name = server_name;
	r.in.NewMachineName = NewMachineName;
	r.in.Account = Account;
	r.in.EncryptedPassword = EncryptedPassword;
	r.in.RenameOptions = RenameOptions;
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(wkssvc_NetrRenameMachineInDomain2, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRRENAMEMACHINEINDOMAIN2, &r, (ndr_pull_flags_fn_t)ndr_pull_wkssvc_NetrRenameMachineInDomain2, (ndr_push_flags_fn_t)ndr_push_wkssvc_NetrRenameMachineInDomain2);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(wkssvc_NetrRenameMachineInDomain2, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRVALIDATENAME2(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRVALIDATENAME2 r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRVALIDATENAME2, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRVALIDATENAME2, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRVALIDATENAME2, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRVALIDATENAME2);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRVALIDATENAME2, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRGETJOINABLEOUS2(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRGETJOINABLEOUS2 r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRGETJOINABLEOUS2, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRGETJOINABLEOUS2, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRGETJOINABLEOUS2, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRGETJOINABLEOUS2);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRGETJOINABLEOUS2, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_wkssvc_NetrAddAlternateComputerName(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx, const char *server_name, const char *NewAlternateMachineName, const char *Account, struct wkssvc_PasswordBuffer *EncryptedPassword, uint32_t Reserved)
{
	struct wkssvc_NetrAddAlternateComputerName r;
	NTSTATUS status;
	
	/* In parameters */
	r.in.server_name = server_name;
	r.in.NewAlternateMachineName = NewAlternateMachineName;
	r.in.Account = Account;
	r.in.EncryptedPassword = EncryptedPassword;
	r.in.Reserved = Reserved;
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(wkssvc_NetrAddAlternateComputerName, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRADDALTERNATECOMPUTERNAME, &r, (ndr_pull_flags_fn_t)ndr_pull_wkssvc_NetrAddAlternateComputerName, (ndr_push_flags_fn_t)ndr_push_wkssvc_NetrAddAlternateComputerName);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(wkssvc_NetrAddAlternateComputerName, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_wkssvc_NetrRemoveAlternateComputerName(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx, const char *server_name, const char *AlternateMachineNameToRemove, const char *Account, struct wkssvc_PasswordBuffer *EncryptedPassword, uint32_t Reserved)
{
	struct wkssvc_NetrRemoveAlternateComputerName r;
	NTSTATUS status;
	
	/* In parameters */
	r.in.server_name = server_name;
	r.in.AlternateMachineNameToRemove = AlternateMachineNameToRemove;
	r.in.Account = Account;
	r.in.EncryptedPassword = EncryptedPassword;
	r.in.Reserved = Reserved;
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(wkssvc_NetrRemoveAlternateComputerName, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRREMOVEALTERNATECOMPUTERNAME, &r, (ndr_pull_flags_fn_t)ndr_pull_wkssvc_NetrRemoveAlternateComputerName, (ndr_push_flags_fn_t)ndr_push_wkssvc_NetrRemoveAlternateComputerName);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(wkssvc_NetrRemoveAlternateComputerName, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRSETPRIMARYCOMPUTERNAME(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRSETPRIMARYCOMPUTERNAME r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRSETPRIMARYCOMPUTERNAME, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRSETPRIMARYCOMPUTERNAME, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRSETPRIMARYCOMPUTERNAME, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRSETPRIMARYCOMPUTERNAME);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRSETPRIMARYCOMPUTERNAME, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}

NTSTATUS rpccli_WKSSVC_NETRENUMERATECOMPUTERNAMES(struct rpc_pipe_client *cli, TALLOC_CTX *mem_ctx)
{
	struct WKSSVC_NETRENUMERATECOMPUTERNAMES r;
	NTSTATUS status;
	
	/* In parameters */
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_IN_DEBUG(WKSSVC_NETRENUMERATECOMPUTERNAMES, &r);
	
	status = cli_do_rpc_ndr(cli, mem_ctx, PI_WKSSVC, DCERPC_WKSSVC_NETRENUMERATECOMPUTERNAMES, &r, (ndr_pull_flags_fn_t)ndr_pull_WKSSVC_NETRENUMERATECOMPUTERNAMES, (ndr_push_flags_fn_t)ndr_push_WKSSVC_NETRENUMERATECOMPUTERNAMES);
	
	if ( !NT_STATUS_IS_OK(status) ) {
		return status;
	}
	
	if (DEBUGLEVEL >= 10)
		NDR_PRINT_OUT_DEBUG(WKSSVC_NETRENUMERATECOMPUTERNAMES, &r);
	
	if (NT_STATUS_IS_ERR(status)) {
		return status;
	}
	
	/* Return variables */
	
	/* Return result */
	return werror_to_ntstatus(r.out.result);
}
