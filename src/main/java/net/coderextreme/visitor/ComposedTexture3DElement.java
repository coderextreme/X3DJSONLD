package net.coderextreme.visitor;
public class ComposedTexture3DElement extends org.web3d.x3d.jsail.Texturing3D.ComposedTexture3D implements VisitableElement
{
	private org.web3d.x3d.jsail.Texturing3D.ComposedTexture3D delegate = null;
	public ComposedTexture3DElement(org.web3d.x3d.jsail.Texturing3D.ComposedTexture3D delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getDescriptionElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getRepeatRElement().accept(v);
		getRepeatSElement().accept(v);
		getRepeatTElement().accept(v);
		getTextureElement().accept(v);
		getTexturePropertiesElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
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
	public MFNodeElement getTextureElement() { 		 return new MFNodeElement<texture>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getTexture()));
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
