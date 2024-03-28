package net.coderextreme.visitor;
public class ComposedCubeMapTextureElement extends org.web3d.x3d.jsail.CubeMapTexturing.ComposedCubeMapTexture implements VisitableElement
{
	private org.web3d.x3d.jsail.CubeMapTexturing.ComposedCubeMapTexture delegate = null;
	public ComposedCubeMapTextureElement(org.web3d.x3d.jsail.CubeMapTexturing.ComposedCubeMapTexture delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBackTextureElement().accept(v);
		getBottomTextureElement().accept(v);
		getDescriptionElement().accept(v);
		getFrontTextureElement().accept(v);
		getISElement().accept(v);
		getLeftTextureElement().accept(v);
		getMetadataElement().accept(v);
		getRightTextureElement().accept(v);
		getTexturePropertiesElement().accept(v);
		getTopTextureElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getBackTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBackTexture()));
}
	public SFNodeElement getBottomTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBottomTexture()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFNodeElement getFrontTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getFrontTexture()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getLeftTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getLeftTexture()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFNodeElement getRightTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getRightTexture()));
}
	public SFNodeElement getTexturePropertiesElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getTextureProperties()));
}
	public SFNodeElement getTopTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getTopTexture()));
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
