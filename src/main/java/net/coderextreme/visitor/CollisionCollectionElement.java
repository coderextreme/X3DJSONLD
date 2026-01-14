package net.coderextreme.visitor;
public class CollisionCollectionElement extends org.web3d.x3d.jsail.RigidBodyPhysics.CollisionCollection implements VisitableElement
{
	private org.web3d.x3d.jsail.RigidBodyPhysics.CollisionCollection delegate = null;
	public CollisionCollectionElement(org.web3d.x3d.jsail.RigidBodyPhysics.CollisionCollection delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAppliedParametersElement().accept(v);
		getBboxCenterElement().accept(v);
		getBboxDisplayElement().accept(v);
		getBboxSizeElement().accept(v);
		getBounceElement().accept(v);
		getCollidablesElement().accept(v);
		getDescriptionElement().accept(v);
		getEnabledElement().accept(v);
		getFrictionCoefficientsElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getMinBounceSpeedElement().accept(v);
		getSlipFactorsElement().accept(v);
		getSoftnessConstantForceMixElement().accept(v);
		getSoftnessErrorCorrectionElement().accept(v);
		getSurfaceSpeedElement().accept(v);
		getVisibleElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFStringElement getAppliedParametersElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getAppliedParameters()));
}
	public SFVec3fElement getBboxCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxCenter()));
}
	public SFBoolElement getBboxDisplayElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getBboxDisplay()));
}
	public SFVec3fElement getBboxSizeElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxSize()));
}
	public SFFloatElement getBounceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getBounce()));
}
	public MFNodeElement getCollidablesElement() { 		 return new MFNodeElement<collidables>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getCollidables()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFVec2fElement getFrictionCoefficientsElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getFrictionCoefficients()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getMinBounceSpeedElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMinBounceSpeed()));
}
	public SFVec2fElement getSlipFactorsElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getSlipFactors()));
}
	public SFFloatElement getSoftnessConstantForceMixElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSoftnessConstantForceMix()));
}
	public SFFloatElement getSoftnessErrorCorrectionElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSoftnessErrorCorrection()));
}
	public SFVec2fElement getSurfaceSpeedElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getSurfaceSpeed()));
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
