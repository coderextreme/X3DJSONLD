package net.coderextreme.visitor;
public class MaterialElement extends org.web3d.x3d.jsail.Shape.Material implements VisitableElement
{
	private org.web3d.x3d.jsail.Shape.Material delegate = null;
	public MaterialElement(org.web3d.x3d.jsail.Shape.Material delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAmbientIntensityElement().accept(v);
		getAmbientTextureElement().accept(v);
		getAmbientTextureMappingElement().accept(v);
		getDiffuseColorElement().accept(v);
		getDiffuseTextureElement().accept(v);
		getDiffuseTextureMappingElement().accept(v);
		getEmissiveColorElement().accept(v);
		getEmissiveTextureElement().accept(v);
		getEmissiveTextureMappingElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getNormalScaleElement().accept(v);
		getNormalTextureElement().accept(v);
		getNormalTextureMappingElement().accept(v);
		getOcclusionStrengthElement().accept(v);
		getOcclusionTextureElement().accept(v);
		getOcclusionTextureMappingElement().accept(v);
		getShininessElement().accept(v);
		getShininessTextureElement().accept(v);
		getShininessTextureMappingElement().accept(v);
		getSpecularColorElement().accept(v);
		getSpecularTextureElement().accept(v);
		getSpecularTextureMappingElement().accept(v);
		getTransparencyElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFFloatElement getAmbientIntensityElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAmbientIntensity()));
}
	public SFNodeElement getAmbientTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getAmbientTexture()));
}
	public SFStringElement getAmbientTextureMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getAmbientTextureMapping()));
}
	public SFColorElement getDiffuseColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getDiffuseColor()));
}
	public SFNodeElement getDiffuseTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getDiffuseTexture()));
}
	public SFStringElement getDiffuseTextureMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDiffuseTextureMapping()));
}
	public SFColorElement getEmissiveColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getEmissiveColor()));
}
	public SFNodeElement getEmissiveTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getEmissiveTexture()));
}
	public SFStringElement getEmissiveTextureMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getEmissiveTextureMapping()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getNormalScaleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getNormalScale()));
}
	public SFNodeElement getNormalTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getNormalTexture()));
}
	public SFStringElement getNormalTextureMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getNormalTextureMapping()));
}
	public SFFloatElement getOcclusionStrengthElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getOcclusionStrength()));
}
	public SFNodeElement getOcclusionTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getOcclusionTexture()));
}
	public SFStringElement getOcclusionTextureMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getOcclusionTextureMapping()));
}
	public SFFloatElement getShininessElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getShininess()));
}
	public SFNodeElement getShininessTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getShininessTexture()));
}
	public SFStringElement getShininessTextureMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getShininessTextureMapping()));
}
	public SFColorElement getSpecularColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getSpecularColor()));
}
	public SFNodeElement getSpecularTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getSpecularTexture()));
}
	public SFStringElement getSpecularTextureMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getSpecularTextureMapping()));
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
