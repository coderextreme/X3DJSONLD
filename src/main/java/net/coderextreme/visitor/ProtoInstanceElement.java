package net.coderextreme.visitor;
public class ProtoInstanceElement extends org.web3d.x3d.jsail.Core.ProtoInstance implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.ProtoInstance delegate = null;
	public ProtoInstanceElement(org.web3d.x3d.jsail.Core.ProtoInstance delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getFieldValueElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getNameElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFNodeElement getFieldValueElement() { 		 return new MFNodeElement<fieldValue>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getFieldValue()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
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