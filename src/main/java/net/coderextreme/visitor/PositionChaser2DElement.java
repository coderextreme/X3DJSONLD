package net.coderextreme.visitor;
public class PositionChaser2DElement extends org.web3d.x3d.jsail.Followers.PositionChaser2D implements VisitableElement
{
	private org.web3d.x3d.jsail.Followers.PositionChaser2D delegate = null;
	public PositionChaser2DElement(org.web3d.x3d.jsail.Followers.PositionChaser2D delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getDurationElement().accept(v);
		getInitialDestinationElement().accept(v);
		getInitialValueElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getMetadataElement().accept(v);
		getValueElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFTimeElement getDurationElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getDuration()));
}
	public SFVec2fElement getInitialDestinationElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getInitialDestination()));
}
	public SFVec2fElement getInitialValueElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getInitialValue()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFVec2fElement getValueElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getValue()));
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