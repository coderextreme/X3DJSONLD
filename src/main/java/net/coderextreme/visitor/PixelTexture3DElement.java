package net.coderextreme.visitor;
public class PixelTexture3DElement extends org.web3d.x3d.jsail.Texturing3D.PixelTexture3D implements VisitableElement
{
	private org.web3d.x3d.jsail.Texturing3D.PixelTexture3D delegate = null;
	public PixelTexture3DElement(org.web3d.x3d.jsail.Texturing3D.PixelTexture3D delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getDescriptionElement().accept(v);
		getImageElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getRepeatRElement().accept(v);
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
	public MFInt32Element getImageElement() { 		 return new MFInt32Element(new org.web3d.x3d.jsail.fields.MFInt32(delegate.getImage()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFBoolElement getRepeatRElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getRepeatR()));
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
