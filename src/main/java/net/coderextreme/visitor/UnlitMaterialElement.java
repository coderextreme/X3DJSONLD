package net.coderextreme.visitor;
public class UnlitMaterialElement extends org.web3d.x3d.jsail.Shape.UnlitMaterial implements VisitableElement
{
	private org.web3d.x3d.jsail.Shape.UnlitMaterial delegate = null;
	public UnlitMaterialElement(org.web3d.x3d.jsail.Shape.UnlitMaterial delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getEmissiveColorElement().accept(v);
		getEmissiveTextureElement().accept(v);
		getEmissiveTextureMappingElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getNormalScaleElement().accept(v);
		getNormalTextureElement().accept(v);
		getNormalTextureMappingElement().accept(v);
		getTransparencyElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
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
