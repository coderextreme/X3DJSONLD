package net.coderextreme.visitor;
public class DirectionalLightElement extends org.web3d.x3d.jsail.Lighting.DirectionalLight implements VisitableElement
{
	private org.web3d.x3d.jsail.Lighting.DirectionalLight delegate = null;
	public DirectionalLightElement(org.web3d.x3d.jsail.Lighting.DirectionalLight delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAmbientIntensityElement().accept(v);
		getColorElement().accept(v);
		getDirectionElement().accept(v);
		getGlobalElement().accept(v);
		getIntensityElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getOnElement().accept(v);
		getShadowIntensityElement().accept(v);
		getShadowsElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFFloatElement getAmbientIntensityElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAmbientIntensity()));
}
	public SFColorElement getColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getColor()));
}
	public SFVec3fElement getDirectionElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getDirection()));
}
	public SFBoolElement getGlobalElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getGlobal()));
}
	public SFFloatElement getIntensityElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getIntensity()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFBoolElement getOnElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getOn()));
}
	public SFFloatElement getShadowIntensityElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getShadowIntensity()));
}
	public SFBoolElement getShadowsElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getShadows()));
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