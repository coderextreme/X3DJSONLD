package net.coderextreme.visitor;
public class TwoSidedMaterialElement extends org.web3d.x3d.jsail.Shape.TwoSidedMaterial implements VisitableElement
{
	private org.web3d.x3d.jsail.Shape.TwoSidedMaterial delegate = null;
	public TwoSidedMaterialElement(org.web3d.x3d.jsail.Shape.TwoSidedMaterial delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAmbientIntensityElement().accept(v);
		getBackAmbientIntensityElement().accept(v);
		getBackDiffuseColorElement().accept(v);
		getBackEmissiveColorElement().accept(v);
		getBackShininessElement().accept(v);
		getBackSpecularColorElement().accept(v);
		getBackTransparencyElement().accept(v);
		getDiffuseColorElement().accept(v);
		getEmissiveColorElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getSeparateBackColorElement().accept(v);
		getShininessElement().accept(v);
		getSpecularColorElement().accept(v);
		getTransparencyElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFFloatElement getAmbientIntensityElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAmbientIntensity()));
}
	public SFFloatElement getBackAmbientIntensityElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getBackAmbientIntensity()));
}
	public SFColorElement getBackDiffuseColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getBackDiffuseColor()));
}
	public SFColorElement getBackEmissiveColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getBackEmissiveColor()));
}
	public SFFloatElement getBackShininessElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getBackShininess()));
}
	public SFColorElement getBackSpecularColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getBackSpecularColor()));
}
	public SFFloatElement getBackTransparencyElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getBackTransparency()));
}
	public SFColorElement getDiffuseColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getDiffuseColor()));
}
	public SFColorElement getEmissiveColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getEmissiveColor()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFBoolElement getSeparateBackColorElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getSeparateBackColor()));
}
	public SFFloatElement getShininessElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getShininess()));
}
	public SFColorElement getSpecularColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getSpecularColor()));
}
	public SFFloatElement getTransparencyElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getTransparency()));
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
