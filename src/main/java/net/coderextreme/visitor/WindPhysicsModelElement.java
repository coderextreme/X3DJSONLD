package net.coderextreme.visitor;
public class WindPhysicsModelElement extends org.web3d.x3d.jsail.ParticleSystems.WindPhysicsModel implements VisitableElement
{
	private org.web3d.x3d.jsail.ParticleSystems.WindPhysicsModel delegate = null;
	public WindPhysicsModelElement(org.web3d.x3d.jsail.ParticleSystems.WindPhysicsModel delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getDirectionElement().accept(v);
		getEnabledElement().accept(v);
		getGustinessElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getSpeedElement().accept(v);
		getTurbulenceElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFVec3fElement getDirectionElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getDirection()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFFloatElement getGustinessElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getGustiness()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getSpeedElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSpeed()));
}
	public SFFloatElement getTurbulenceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getTurbulence()));
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
