package net.coderextreme.visitor;
public class X3DUrlObjectElement implements org.web3d.x3d.sai.Networking.X3DUrlObject ,  VisitableElement
{
	private org.web3d.x3d.sai.Networking.X3DUrlObject delegate = null;
	public X3DUrlObjectElement(org.web3d.x3d.sai.Networking.X3DUrlObject delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAutoRefreshElement().accept(v);
		getAutoRefreshTimeLimitElement().accept(v);
		getDescriptionElement().accept(v);
		getLoadElement().accept(v);
		getUrlElement().accept(v);
	}
	public SFTimeElement getAutoRefreshElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getAutoRefresh()));
}
	public SFTimeElement getAutoRefreshTimeLimitElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getAutoRefreshTimeLimit()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getLoadElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getLoad()));
}
	public MFStringElement getUrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getUrl()));
}
}
