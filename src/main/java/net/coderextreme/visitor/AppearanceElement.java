package net.coderextreme.visitor;
public class AppearanceElement extends org.web3d.x3d.jsail.Shape.Appearance implements VisitableElement
{
	private org.web3d.x3d.jsail.Shape.Appearance delegate = null;
	public AppearanceElement(org.web3d.x3d.jsail.Shape.Appearance delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAcousticPropertiesElement().accept(v);
		getAlphaCutoffElement().accept(v);
		getAlphaModeElement().accept(v);
		getBackMaterialElement().accept(v);
		getFillPropertiesElement().accept(v);
		getISElement().accept(v);
		getLinePropertiesElement().accept(v);
		getMaterialElement().accept(v);
		getMetadataElement().accept(v);
		getPointPropertiesElement().accept(v);
		getShadersElement().accept(v);
		getTextureElement().accept(v);
		getTextureTransformElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getAcousticPropertiesElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getAcousticProperties()));
}
	public SFFloatElement getAlphaCutoffElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAlphaCutoff()));
}
	public SFStringElement getAlphaModeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getAlphaMode()));
}
	public SFNodeElement getBackMaterialElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBackMaterial()));
}
	public SFNodeElement getFillPropertiesElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getFillProperties()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getLinePropertiesElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getLineProperties()));
}
	public SFNodeElement getMaterialElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getMaterial()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFNodeElement getPointPropertiesElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getPointProperties()));
}
	public MFNodeElement getShadersElement() { 		 return new MFNodeElement<shaders>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getShaders()));
}
	public SFNodeElement getTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getTexture()));
}
	public SFNodeElement getTextureTransformElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getTextureTransform()));
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
