package net.coderextreme.visitor;
public class MultiTextureElement extends org.web3d.x3d.jsail.Texturing.MultiTexture implements VisitableElement
{
	private org.web3d.x3d.jsail.Texturing.MultiTexture delegate = null;
	public MultiTextureElement(org.web3d.x3d.jsail.Texturing.MultiTexture delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAlphaElement().accept(v);
		getColorElement().accept(v);
		getDescriptionElement().accept(v);
		getFunctionElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getModeElement().accept(v);
		getSourceElement().accept(v);
		getTextureElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFFloatElement getAlphaElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAlpha()));
}
	public SFColorElement getColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getColor()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public MFStringElement getFunctionElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getFunction()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFStringElement getModeElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getMode()));
}
	public MFStringElement getSourceElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getSource()));
}
	public MFNodeElement getTextureElement() { 		 return new MFNodeElement<texture>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getTexture()));
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
