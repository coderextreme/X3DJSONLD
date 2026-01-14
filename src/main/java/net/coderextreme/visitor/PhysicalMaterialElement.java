package net.coderextreme.visitor;
public class PhysicalMaterialElement extends org.web3d.x3d.jsail.Shape.PhysicalMaterial implements VisitableElement
{
	private org.web3d.x3d.jsail.Shape.PhysicalMaterial delegate = null;
	public PhysicalMaterialElement(org.web3d.x3d.jsail.Shape.PhysicalMaterial delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBaseColorElement().accept(v);
		getBaseTextureElement().accept(v);
		getBaseTextureMappingElement().accept(v);
		getEmissiveColorElement().accept(v);
		getEmissiveTextureElement().accept(v);
		getEmissiveTextureMappingElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getMetallicElement().accept(v);
		getMetallicRoughnessTextureElement().accept(v);
		getMetallicRoughnessTextureMappingElement().accept(v);
		getNormalScaleElement().accept(v);
		getNormalTextureElement().accept(v);
		getNormalTextureMappingElement().accept(v);
		getOcclusionStrengthElement().accept(v);
		getOcclusionTextureElement().accept(v);
		getOcclusionTextureMappingElement().accept(v);
		getRoughnessElement().accept(v);
		getTransparencyElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFColorElement getBaseColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getBaseColor()));
}
	public SFNodeElement getBaseTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBaseTexture()));
}
	public SFStringElement getBaseTextureMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getBaseTextureMapping()));
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
	public SFFloatElement getMetallicElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMetallic()));
}
	public SFNodeElement getMetallicRoughnessTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getMetallicRoughnessTexture()));
}
	public SFStringElement getMetallicRoughnessTextureMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMetallicRoughnessTextureMapping()));
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
	public SFFloatElement getRoughnessElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getRoughness()));
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
