/*
    LDNS Version of adns.c
*/
#include "precomp.h"

#define NDEBUG
#include <debug.h>

DNS_STATUS
DnsIntTranslateAdnsToDNS_STATUS(int Status)
{
    switch (Status)
    {
        case LDNS_STATUS_OK:
            return ERROR_SUCCESS;

        default: /* There really aren't any general errors in the dns part. */
            return ERROR_OUTOFMEMORY;
    }
}
