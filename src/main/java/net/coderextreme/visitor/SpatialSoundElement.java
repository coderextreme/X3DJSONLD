package net.coderextreme.visitor;
public class SpatialSoundElement extends org.web3d.x3d.jsail.Sound.SpatialSound implements VisitableElement
{
	private org.web3d.x3d.jsail.Sound.SpatialSound delegate = null;
	public SpatialSoundElement(org.web3d.x3d.jsail.Sound.SpatialSound delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getChildrenElement().accept(v);
		getConeInnerAngleElement().accept(v);
		getConeOuterAngleElement().accept(v);
		getConeOuterGainElement().accept(v);
		getDescriptionElement().accept(v);
		getDirectionElement().accept(v);
		getDistanceModelElement().accept(v);
		getDopplerEnabledElement().accept(v);
		getEnabledElement().accept(v);
		getEnableHRTFElement().accept(v);
		getGainElement().accept(v);
		getIntensityElement().accept(v);
		getISElement().accept(v);
		getLocationElement().accept(v);
		getMaxDistanceElement().accept(v);
		getMetadataElement().accept(v);
		getPriorityElement().accept(v);
		getReferenceDistanceElement().accept(v);
		getRolloffFactorElement().accept(v);
		getSpatializeElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFNodeElement getChildrenElement() { 		 return new MFNodeElement(delegate.getChildren());
}
	public SFFloatElement getConeInnerAngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getConeInnerAngle()));
}
	public SFFloatElement getConeOuterAngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getConeOuterAngle()));
}
	public SFFloatElement getConeOuterGainElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getConeOuterGain()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFVec3fElement getDirectionElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getDirection()));
}
	public SFStringElement getDistanceModelElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDistanceModel()));
}
	public SFBoolElement getDopplerEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getDopplerEnabled()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFBoolElement getEnableHRTFElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnableHRTF()));
}
	public SFFloatElement getGainElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getGain()));
}
	public SFFloatElement getIntensityElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getIntensity()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFVec3fElement getLocationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getLocation()));
}
	public SFFloatElement getMaxDistanceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMaxDistance()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getPriorityElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getPriority()));
}
	public SFFloatElement getReferenceDistanceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getReferenceDistance()));
}
	public SFFloatElement getRolloffFactorElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getRolloffFactor()));
}
	public SFBoolElement getSpatializeElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getSpatialize()));
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
