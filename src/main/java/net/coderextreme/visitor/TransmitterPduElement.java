package net.coderextreme.visitor;
public class TransmitterPduElement extends org.web3d.x3d.jsail.DIS.TransmitterPdu implements VisitableElement
{
	private org.web3d.x3d.jsail.DIS.TransmitterPdu delegate = null;
	public TransmitterPduElement(org.web3d.x3d.jsail.DIS.TransmitterPdu delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAddressElement().accept(v);
		getAntennaLocationElement().accept(v);
		getAntennaPatternLengthElement().accept(v);
		getAntennaPatternTypeElement().accept(v);
		getApplicationIDElement().accept(v);
		getBboxCenterElement().accept(v);
		getBboxDisplayElement().accept(v);
		getBboxSizeElement().accept(v);
		getCryptoKeyIDElement().accept(v);
		getCryptoSystemElement().accept(v);
		getDescriptionElement().accept(v);
		getEnabledElement().accept(v);
		getEntityIDElement().accept(v);
		getFrequencyElement().accept(v);
		getGeoCoordsElement().accept(v);
		getGeoSystemElement().accept(v);
		getInputSourceElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getIsNetworkReaderElement().accept(v);
		getIsNetworkWriterElement().accept(v);
		getIsRtpHeaderHeardElement().accept(v);
		getIsStandAloneElement().accept(v);
		getLengthOfModulationParametersElement().accept(v);
		getMetadataElement().accept(v);
		getModulationTypeDetailElement().accept(v);
		getModulationTypeMajorElement().accept(v);
		getModulationTypeSpreadSpectrumElement().accept(v);
		getModulationTypeSystemElement().accept(v);
		getMulticastRelayHostElement().accept(v);
		getMulticastRelayPortElement().accept(v);
		getNetworkModeElement().accept(v);
		getPortElement().accept(v);
		getPowerElement().accept(v);
		getRadioEntityTypeCategoryElement().accept(v);
		getRadioEntityTypeCountryElement().accept(v);
		getRadioEntityTypeDomainElement().accept(v);
		getRadioEntityTypeKindElement().accept(v);
		getRadioEntityTypeNomenclatureElement().accept(v);
		getRadioEntityTypeNomenclatureVersionElement().accept(v);
		getRadioIDElement().accept(v);
		getReadIntervalElement().accept(v);
		getRelativeAntennaLocationElement().accept(v);
		getRtpHeaderExpectedElement().accept(v);
		getSiteIDElement().accept(v);
		getTimestampElement().accept(v);
		getTransmitFrequencyBandwidthElement().accept(v);
		getTransmitStateElement().accept(v);
		getVisibleElement().accept(v);
		getWhichGeometryElement().accept(v);
		getWriteIntervalElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getAddressElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getAddress()));
}
	public SFVec3fElement getAntennaLocationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getAntennaLocation()));
}
	public SFInt32Element getAntennaPatternLengthElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getAntennaPatternLength()));
}
	public SFInt32Element getAntennaPatternTypeElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getAntennaPatternType()));
}
	public SFInt32Element getApplicationIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getApplicationID()));
}
	public SFVec3fElement getBboxCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxCenter()));
}
	public SFBoolElement getBboxDisplayElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getBboxDisplay()));
}
	public SFVec3fElement getBboxSizeElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxSize()));
}
	public SFInt32Element getCryptoKeyIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getCryptoKeyID()));
}
	public SFInt32Element getCryptoSystemElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getCryptoSystem()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFInt32Element getEntityIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEntityID()));
}
	public SFInt32Element getFrequencyElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getFrequency()));
}
	public SFVec3dElement getGeoCoordsElement() { 		 return new SFVec3dElement(new org.web3d.x3d.jsail.fields.SFVec3d(delegate.getGeoCoords()));
}
	public MFStringElement getGeoSystemElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getGeoSystem()));
}
	public SFInt32Element getInputSourceElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getInputSource()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFBoolElement getIsNetworkReaderElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsNetworkReader()));
}
	public SFBoolElement getIsNetworkWriterElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsNetworkWriter()));
}
	public SFBoolElement getIsRtpHeaderHeardElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsRtpHeaderHeard()));
}
	public SFBoolElement getIsStandAloneElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsStandAlone()));
}
	public SFInt32Element getLengthOfModulationParametersElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getLengthOfModulationParameters()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFInt32Element getModulationTypeDetailElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getModulationTypeDetail()));
}
	public SFInt32Element getModulationTypeMajorElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getModulationTypeMajor()));
}
	public SFInt32Element getModulationTypeSpreadSpectrumElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getModulationTypeSpreadSpectrum()));
}
	public SFInt32Element getModulationTypeSystemElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getModulationTypeSystem()));
}
	public SFStringElement getMulticastRelayHostElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMulticastRelayHost()));
}
	public SFInt32Element getMulticastRelayPortElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getMulticastRelayPort()));
}
	public SFStringElement getNetworkModeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getNetworkMode()));
}
	public SFInt32Element getPortElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getPort()));
}
	public SFFloatElement getPowerElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getPower()));
}
	public SFInt32Element getRadioEntityTypeCategoryElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getRadioEntityTypeCategory()));
}
	public SFInt32Element getRadioEntityTypeCountryElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getRadioEntityTypeCountry()));
}
	public SFInt32Element getRadioEntityTypeDomainElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getRadioEntityTypeDomain()));
}
	public SFInt32Element getRadioEntityTypeKindElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getRadioEntityTypeKind()));
}
	public SFInt32Element getRadioEntityTypeNomenclatureElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getRadioEntityTypeNomenclature()));
}
	public SFInt32Element getRadioEntityTypeNomenclatureVersionElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getRadioEntityTypeNomenclatureVersion()));
}
	public SFInt32Element getRadioIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getRadioID()));
}
	public SFTimeElement getReadIntervalElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getReadInterval()));
}
	public SFVec3fElement getRelativeAntennaLocationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getRelativeAntennaLocation()));
}
	public SFBoolElement getRtpHeaderExpectedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getRtpHeaderExpected()));
}
	public SFInt32Element getSiteIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getSiteID()));
}
	public SFTimeElement getTimestampElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getTimestamp()));
}
	public SFFloatElement getTransmitFrequencyBandwidthElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getTransmitFrequencyBandwidth()));
}
	public SFInt32Element getTransmitStateElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getTransmitState()));
}
	public SFBoolElement getVisibleElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getVisible()));
}
	public SFInt32Element getWhichGeometryElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getWhichGeometry()));
}
	public SFTimeElement getWriteIntervalElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getWriteInterval()));
}
	public SFStringElement getDEFElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDEF()));
}
	public SFStringElement getUSEElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getUSE()));
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
