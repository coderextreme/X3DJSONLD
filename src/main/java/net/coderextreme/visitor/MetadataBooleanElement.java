package net.coderextreme.visitor;
public class MetadataBooleanElement extends org.web3d.x3d.jsail.Core.MetadataBoolean implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.MetadataBoolean delegate = null;
	public MetadataBooleanElement(org.web3d.x3d.jsail.Core.MetadataBoolean delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getNameElement().accept(v);
		getReferenceElement().accept(v);
		getValueElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
}
	public SFStringElement getReferenceElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getReference()));
}
	public MFBoolElement getValueElement() { 		 return new MFBoolElement(new org.web3d.x3d.jsail.fields.MFBool(delegate.getValue()));
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
