package net.coderextreme.visitor;
public class metaElement extends org.web3d.x3d.jsail.Core.meta implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.meta delegate = null;
	public metaElement(org.web3d.x3d.jsail.Core.meta delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCssClassElement().accept(v);
		getContentElement().accept(v);
		getDirElement().accept(v);
		getHttp_equivElement().accept(v);
		getLangElement().accept(v);
		getNameElement().accept(v);
		getSchemeElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getContentElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getContent()));
}
	public SFStringElement getDirElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDir()));
}
	public SFStringElement getHttp_equivElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getHttp_equiv()));
}
	public SFStringElement getLangElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getLang()));
}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
}
	public SFStringElement getSchemeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getScheme()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
