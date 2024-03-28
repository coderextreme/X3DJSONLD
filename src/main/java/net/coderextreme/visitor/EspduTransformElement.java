package net.coderextreme.visitor;
public class EspduTransformElement extends org.web3d.x3d.jsail.DIS.EspduTransform implements VisitableElement
{
	private org.web3d.x3d.jsail.DIS.EspduTransform delegate = null;
	public EspduTransformElement(org.web3d.x3d.jsail.DIS.EspduTransform delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAddressElement().accept(v);
		getApplicationIDElement().accept(v);
		getArticulationParameterArrayElement().accept(v);
		getArticulationParameterChangeIndicatorArrayElement().accept(v);
		getArticulationParameterCountElement().accept(v);
		getArticulationParameterDesignatorArrayElement().accept(v);
		getArticulationParameterIdPartAttachedToArrayElement().accept(v);
		getArticulationParameterTypeArrayElement().accept(v);
		getArticulationParameterValue0Element().accept(v);
		getArticulationParameterValue1Element().accept(v);
		getArticulationParameterValue2Element().accept(v);
		getArticulationParameterValue3Element().accept(v);
		getArticulationParameterValue4Element().accept(v);
		getArticulationParameterValue5Element().accept(v);
		getArticulationParameterValue6Element().accept(v);
		getArticulationParameterValue7Element().accept(v);
		getBboxCenterElement().accept(v);
		getBboxDisplayElement().accept(v);
		getBboxSizeElement().accept(v);
		getCenterElement().accept(v);
		getChildrenElement().accept(v);
		getCollideTimeElement().accept(v);
		getCollisionTypeElement().accept(v);
		getDeadReckoningElement().accept(v);
		getDescriptionElement().accept(v);
		getDetonateTimeElement().accept(v);
		getDetonationLocationElement().accept(v);
		getDetonationRelativeLocationElement().accept(v);
		getDetonationResultElement().accept(v);
		getEnabledElement().accept(v);
		getEntityCategoryElement().accept(v);
		getEntityCountryElement().accept(v);
		getEntityDomainElement().accept(v);
		getEntityExtraElement().accept(v);
		getEntityIDElement().accept(v);
		getEntityKindElement().accept(v);
		getEntitySpecificElement().accept(v);
		getEntitySubcategoryElement().accept(v);
		getEventApplicationIDElement().accept(v);
		getEventEntityIDElement().accept(v);
		getEventNumberElement().accept(v);
		getEventSiteIDElement().accept(v);
		getFired1Element().accept(v);
		getFired2Element().accept(v);
		getFiredTimeElement().accept(v);
		getFireMissionIndexElement().accept(v);
		getFiringRangeElement().accept(v);
		getFiringRateElement().accept(v);
		getForceIDElement().accept(v);
		getFuseElement().accept(v);
		getGeoCoordsElement().accept(v);
		getGeoSystemElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getIsCollidedElement().accept(v);
		getIsDetonatedElement().accept(v);
		getIsNetworkReaderElement().accept(v);
		getIsNetworkWriterElement().accept(v);
		getIsRtpHeaderHeardElement().accept(v);
		getIsStandAloneElement().accept(v);
		getLinearAccelerationElement().accept(v);
		getLinearVelocityElement().accept(v);
		getMarkingElement().accept(v);
		getMetadataElement().accept(v);
		getMulticastRelayHostElement().accept(v);
		getMulticastRelayPortElement().accept(v);
		getMunitionApplicationIDElement().accept(v);
		getMunitionEndPointElement().accept(v);
		getMunitionEntityIDElement().accept(v);
		getMunitionQuantityElement().accept(v);
		getMunitionSiteIDElement().accept(v);
		getMunitionStartPointElement().accept(v);
		getNetworkModeElement().accept(v);
		getPortElement().accept(v);
		getReadIntervalElement().accept(v);
		getRotationElement().accept(v);
		getRtpHeaderExpectedElement().accept(v);
		getScaleElement().accept(v);
		getScaleOrientationElement().accept(v);
		getSiteIDElement().accept(v);
		getTimestampElement().accept(v);
		getTranslationElement().accept(v);
		getVisibleElement().accept(v);
		getWarheadElement().accept(v);
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
	public MFFloatElement getArticulationParameterArrayElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getArticulationParameterArray()));
}
	public MFInt32Element getArticulationParameterChangeIndicatorArrayElement() { 		 return new MFInt32Element(new org.web3d.x3d.jsail.fields.MFInt32(delegate.getArticulationParameterChangeIndicatorArray()));
}
	public SFInt32Element getArticulationParameterCountElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getArticulationParameterCount()));
}
	public MFInt32Element getArticulationParameterDesignatorArrayElement() { 		 return new MFInt32Element(new org.web3d.x3d.jsail.fields.MFInt32(delegate.getArticulationParameterDesignatorArray()));
}
	public MFInt32Element getArticulationParameterIdPartAttachedToArrayElement() { 		 return new MFInt32Element(new org.web3d.x3d.jsail.fields.MFInt32(delegate.getArticulationParameterIdPartAttachedToArray()));
}
	public MFInt32Element getArticulationParameterTypeArrayElement() { 		 return new MFInt32Element(new org.web3d.x3d.jsail.fields.MFInt32(delegate.getArticulationParameterTypeArray()));
}
	public SFFloatElement getArticulationParameterValue0Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getArticulationParameterValue0()));
}
	public SFFloatElement getArticulationParameterValue1Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getArticulationParameterValue1()));
}
	public SFFloatElement getArticulationParameterValue2Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getArticulationParameterValue2()));
}
	public SFFloatElement getArticulationParameterValue3Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getArticulationParameterValue3()));
}
	public SFFloatElement getArticulationParameterValue4Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getArticulationParameterValue4()));
}
	public SFFloatElement getArticulationParameterValue5Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getArticulationParameterValue5()));
}
	public SFFloatElement getArticulationParameterValue6Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getArticulationParameterValue6()));
}
	public SFFloatElement getArticulationParameterValue7Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getArticulationParameterValue7()));
}
	public SFVec3fElement getBboxCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxCenter()));
}
	public SFBoolElement getBboxDisplayElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getBboxDisplay()));
}
	public SFVec3fElement getBboxSizeElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxSize()));
}
	public SFVec3fElement getCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getCenter()));
}
	public MFNodeElement getChildrenElement() { 		 return new MFNodeElement(delegate.getChildren());
}
	public SFTimeElement getCollideTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getCollideTime()));
}
	public SFInt32Element getCollisionTypeElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getCollisionType()));
}
	public SFInt32Element getDeadReckoningElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getDeadReckoning()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFTimeElement getDetonateTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getDetonateTime()));
}
	public SFVec3fElement getDetonationLocationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getDetonationLocation()));
}
	public SFVec3fElement getDetonationRelativeLocationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getDetonationRelativeLocation()));
}
	public SFInt32Element getDetonationResultElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getDetonationResult()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFInt32Element getEntityCategoryElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEntityCategory()));
}
	public SFInt32Element getEntityCountryElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEntityCountry()));
}
	public SFInt32Element getEntityDomainElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEntityDomain()));
}
	public SFInt32Element getEntityExtraElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEntityExtra()));
}
	public SFInt32Element getEntityIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEntityID()));
}
	public SFInt32Element getEntityKindElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEntityKind()));
}
	public SFInt32Element getEntitySpecificElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEntitySpecific()));
}
	public SFInt32Element getEntitySubcategoryElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEntitySubcategory()));
}
	public SFInt32Element getEventApplicationIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEventApplicationID()));
}
	public SFInt32Element getEventEntityIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEventEntityID()));
}
	public SFInt32Element getEventNumberElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEventNumber()));
}
	public SFInt32Element getEventSiteIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEventSiteID()));
}
	public SFBoolElement getFired1Element() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getFired1()));
}
	public SFBoolElement getFired2Element() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getFired2()));
}
	public SFTimeElement getFiredTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getFiredTime()));
}
	public SFInt32Element getFireMissionIndexElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getFireMissionIndex()));
}
	public SFFloatElement getFiringRangeElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getFiringRange()));
}
	public SFInt32Element getFiringRateElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getFiringRate()));
}
	public SFInt32Element getForceIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getForceID()));
}
	public SFInt32Element getFuseElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getFuse()));
}
	public SFVec3dElement getGeoCoordsElement() { 		 return new SFVec3dElement(new org.web3d.x3d.jsail.fields.SFVec3d(delegate.getGeoCoords()));
}
	public MFStringElement getGeoSystemElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getGeoSystem()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFBoolElement getIsCollidedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsCollided()));
}
	public SFBoolElement getIsDetonatedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsDetonated()));
}
	public SFBoolElement getIsNetworkReaderElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsNetworkReader()));
}
	public SFBoolElement getIsNetworkWriterElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsNetworkWriter()));
}
	public SFBoolElement getIsRtpHeaderHeardElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsRtpHeaderHeard()));
}
	public SFBoolElement getIsStandAloneElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsStandAlone()));
}
	public SFVec3fElement getLinearAccelerationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getLinearAcceleration()));
}
	public SFVec3fElement getLinearVelocityElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getLinearVelocity()));
}
	public SFStringElement getMarkingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMarking()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getMulticastRelayHostElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMulticastRelayHost()));
}
	public SFInt32Element getMulticastRelayPortElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getMulticastRelayPort()));
}
	public SFInt32Element getMunitionApplicationIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getMunitionApplicationID()));
}
	public SFVec3fElement getMunitionEndPointElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getMunitionEndPoint()));
}
	public SFInt32Element getMunitionEntityIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getMunitionEntityID()));
}
	public SFInt32Element getMunitionQuantityElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getMunitionQuantity()));
}
	public SFInt32Element getMunitionSiteIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getMunitionSiteID()));
}
	public SFVec3fElement getMunitionStartPointElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getMunitionStartPoint()));
}
	public SFStringElement getNetworkModeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getNetworkMode()));
}
	public SFInt32Element getPortElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getPort()));
}
	public SFTimeElement getReadIntervalElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getReadInterval()));
}
	public SFRotationElement getRotationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getRotation()));
}
	public SFBoolElement getRtpHeaderExpectedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getRtpHeaderExpected()));
}
	public SFVec3fElement getScaleElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getScale()));
}
	public SFRotationElement getScaleOrientationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getScaleOrientation()));
}
	public SFInt32Element getSiteIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getSiteID()));
}
	public SFTimeElement getTimestampElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getTimestamp()));
}
	public SFVec3fElement getTranslationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getTranslation()));
}
	public SFBoolElement getVisibleElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getVisible()));
}
	public SFInt32Element getWarheadElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getWarhead()));
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
