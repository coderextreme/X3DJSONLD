package net.coderextreme.visitor;
public class TextureCoordinateGeneratorElement extends org.web3d.x3d.jsail.Texturing.TextureCoordinateGenerator implements VisitableElement
{
	private org.web3d.x3d.jsail.Texturing.TextureCoordinateGenerator delegate = null;
	public TextureCoordinateGeneratorElement(org.web3d.x3d.jsail.Texturing.TextureCoordinateGenerator delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getISElement().accept(v);
		getMappingElement().accept(v);
		getMetadataElement().accept(v);
		getModeElement().accept(v);
		getParameterElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFStringElement getMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMapping()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getModeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMode()));
}
	public MFFloatElement getParameterElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getParameter()));
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
