/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn/ngap-15.8.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_ReflectiveQosAttribute_H_
#define	_ASN_NGAP_ReflectiveQosAttribute_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_ReflectiveQosAttribute {
	ASN_NGAP_ReflectiveQosAttribute_subject_to	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_NGAP_ReflectiveQosAttribute;

/* ASN_NGAP_ReflectiveQosAttribute */
typedef long	 ASN_NGAP_ReflectiveQosAttribute_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_ReflectiveQosAttribute_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_ReflectiveQosAttribute;
extern const asn_INTEGER_specifics_t asn_SPC_ASN_NGAP_ReflectiveQosAttribute_specs_1;
asn_struct_free_f ASN_NGAP_ReflectiveQosAttribute_free;
asn_struct_print_f ASN_NGAP_ReflectiveQosAttribute_print;
asn_constr_check_f ASN_NGAP_ReflectiveQosAttribute_constraint;
ber_type_decoder_f ASN_NGAP_ReflectiveQosAttribute_decode_ber;
der_type_encoder_f ASN_NGAP_ReflectiveQosAttribute_encode_der;
xer_type_decoder_f ASN_NGAP_ReflectiveQosAttribute_decode_xer;
xer_type_encoder_f ASN_NGAP_ReflectiveQosAttribute_encode_xer;
per_type_decoder_f ASN_NGAP_ReflectiveQosAttribute_decode_uper;
per_type_encoder_f ASN_NGAP_ReflectiveQosAttribute_encode_uper;
per_type_decoder_f ASN_NGAP_ReflectiveQosAttribute_decode_aper;
per_type_encoder_f ASN_NGAP_ReflectiveQosAttribute_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_ReflectiveQosAttribute_H_ */
#include <asn_internal.h>
