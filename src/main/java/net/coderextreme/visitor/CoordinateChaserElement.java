package net.coderextreme.visitor;
public class CoordinateChaserElement extends org.web3d.x3d.jsail.Followers.CoordinateChaser implements VisitableElement
{
	private org.web3d.x3d.jsail.Followers.CoordinateChaser delegate = null;
	public CoordinateChaserElement(org.web3d.x3d.jsail.Followers.CoordinateChaser delegate) {
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
	public MFVec3fElement getInitialDestinationElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getInitialDestination()));
}
	public MFVec3fElement getInitialValueElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getInitialValue()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFVec3fElement getValueElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getValue()));
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
