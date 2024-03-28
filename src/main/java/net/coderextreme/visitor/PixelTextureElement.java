package net.coderextreme.visitor;
public class PixelTextureElement extends org.web3d.x3d.jsail.Texturing.PixelTexture implements VisitableElement
{
	private org.web3d.x3d.jsail.Texturing.PixelTexture delegate = null;
	public PixelTextureElement(org.web3d.x3d.jsail.Texturing.PixelTexture delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getDescriptionElement().accept(v);
		getImageElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getRepeatSElement().accept(v);
		getRepeatTElement().accept(v);
		getTexturePropertiesElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFImageElement getImageElement() { 		 return new SFImageElement(new org.web3d.x3d.jsail.fields.SFImage(delegate.getImage()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFBoolElement getRepeatSElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getRepeatS()));
}
	public SFBoolElement getRepeatTElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getRepeatT()));
}
	public SFNodeElement getTexturePropertiesElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getTextureProperties()));
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
