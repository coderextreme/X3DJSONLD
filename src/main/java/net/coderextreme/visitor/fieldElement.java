package net.coderextreme.visitor;
public class fieldElement extends org.web3d.x3d.jsail.Core.field implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.field delegate = null;
	public fieldElement(org.web3d.x3d.jsail.Core.field delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAccessTypeElement().accept(v);
		getAppinfoElement().accept(v);
		getChildrenElement().accept(v);
		getCssClassElement().accept(v);
		getDocumentationElement().accept(v);
		getNameElement().accept(v);
		getCssStyleElement().accept(v);
		getTypeElement().accept(v);
		getValueElement().accept(v);
	}
	public SFStringElement getAccessTypeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getAccessType()));
}
	public SFStringElement getAppinfoElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getAppinfo()));
}
	public MFNodeElement getChildrenElement() { 		 return new MFNodeElement(delegate.getChildren());
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getDocumentationElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDocumentation()));
}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
	public SFStringElement getTypeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getType()));
}
	public SFStringElement getValueElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getValue()));
}
}
