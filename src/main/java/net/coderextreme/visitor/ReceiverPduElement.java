package net.coderextreme.visitor;
public class ReceiverPduElement extends org.web3d.x3d.jsail.DIS.ReceiverPdu implements VisitableElement
{
	private org.web3d.x3d.jsail.DIS.ReceiverPdu delegate = null;
	public ReceiverPduElement(org.web3d.x3d.jsail.DIS.ReceiverPdu delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAddressElement().accept(v);
		getApplicationIDElement().accept(v);
		getBboxCenterElement().accept(v);
		getBboxDisplayElement().accept(v);
		getBboxSizeElement().accept(v);
		getDescriptionElement().accept(v);
		getEnabledElement().accept(v);
		getEntityIDElement().accept(v);
		getGeoCoordsElement().accept(v);
		getGeoSystemElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getIsNetworkReaderElement().accept(v);
		getIsNetworkWriterElement().accept(v);
		getIsRtpHeaderHeardElement().accept(v);
		getIsStandAloneElement().accept(v);
		getMetadataElement().accept(v);
		getMulticastRelayHostElement().accept(v);
		getMulticastRelayPortElement().accept(v);
		getNetworkModeElement().accept(v);
		getPortElement().accept(v);
		getRadioIDElement().accept(v);
		getReadIntervalElement().accept(v);
		getReceivedPowerElement().accept(v);
		getReceiverStateElement().accept(v);
		getRtpHeaderExpectedElement().accept(v);
		getSiteIDElement().accept(v);
		getTimestampElement().accept(v);
		getTransmitterApplicationIDElement().accept(v);
		getTransmitterEntityIDElement().accept(v);
		getTransmitterRadioIDElement().accept(v);
		getTransmitterSiteIDElement().accept(v);
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
	public SFInt32Element getApplicationIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getApplicationID()));
}
	public SFVec3fElement getBboxCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxCenter()));
}
	public SFBoolElement getBboxDisplayElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getBboxDisplay()));
}
	public SFVec3fElement getBboxSizeElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxSize()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFInt32Element getEntityIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEntityID()));
}
	public SFVec3dElement getGeoCoordsElement() { 		 return new SFVec3dElement(new org.web3d.x3d.jsail.fields.SFVec3d(delegate.getGeoCoords()));
}
	public MFStringElement getGeoSystemElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getGeoSystem()));
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
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getMulticastRelayHostElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMulticastRelayHost()));
}
	public SFInt32Element getMulticastRelayPortElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getMulticastRelayPort()));
}
	public SFStringElement getNetworkModeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getNetworkMode()));
}
	public SFInt32Element getPortElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getPort()));
}
	public SFInt32Element getRadioIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getRadioID()));
}
	public SFTimeElement getReadIntervalElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getReadInterval()));
}
	public SFFloatElement getReceivedPowerElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getReceivedPower()));
}
	public SFInt32Element getReceiverStateElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getReceiverState()));
}
	public SFBoolElement getRtpHeaderExpectedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getRtpHeaderExpected()));
}
	public SFInt32Element getSiteIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getSiteID()));
}
	public SFTimeElement getTimestampElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getTimestamp()));
}
	public SFInt32Element getTransmitterApplicationIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getTransmitterApplicationID()));
}
	public SFInt32Element getTransmitterEntityIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getTransmitterEntityID()));
}
	public SFInt32Element getTransmitterRadioIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getTransmitterRadioID()));
}
	public SFInt32Element getTransmitterSiteIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getTransmitterSiteID()));
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
