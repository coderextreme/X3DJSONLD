package net.coderextreme.visitor;
public class HAnimJointElement extends org.web3d.x3d.jsail.HAnim.HAnimJoint implements VisitableElement
{
	private org.web3d.x3d.jsail.HAnim.HAnimJoint delegate = null;
	public HAnimJointElement(org.web3d.x3d.jsail.HAnim.HAnimJoint delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBboxCenterElement().accept(v);
		getBboxDisplayElement().accept(v);
		getBboxSizeElement().accept(v);
		getCenterElement().accept(v);
		getChildrenElement().accept(v);
		getDescriptionElement().accept(v);
		getDisplacersElement().accept(v);
		getISElement().accept(v);
		getLimitOrientationElement().accept(v);
		getLlimitElement().accept(v);
		getMetadataElement().accept(v);
		getNameElement().accept(v);
		getRotationElement().accept(v);
		getScaleElement().accept(v);
		getScaleOrientationElement().accept(v);
		getSkinCoordIndexElement().accept(v);
		getSkinCoordWeightElement().accept(v);
		getStiffnessElement().accept(v);
		getTranslationElement().accept(v);
		getUlimitElement().accept(v);
		getVisibleElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
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
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public MFNodeElement getDisplacersElement() { 		 return new MFNodeElement<displacers>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getDisplacers()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFRotationElement getLimitOrientationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getLimitOrientation()));
}
	public MFFloatElement getLlimitElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getLlimit()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
}
	public SFRotationElement getRotationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getRotation()));
}
	public SFVec3fElement getScaleElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getScale()));
}
	public SFRotationElement getScaleOrientationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getScaleOrientation()));
}
	public MFInt32Element getSkinCoordIndexElement() { 		 return new MFInt32Element(new org.web3d.x3d.jsail.fields.MFInt32(delegate.getSkinCoordIndex()));
}
	public MFFloatElement getSkinCoordWeightElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getSkinCoordWeight()));
}
	public MFFloatElement getStiffnessElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getStiffness()));
}
	public SFVec3fElement getTranslationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getTranslation()));
}
	public MFFloatElement getUlimitElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getUlimit()));
}
	public SFBoolElement getVisibleElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getVisible()));
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
