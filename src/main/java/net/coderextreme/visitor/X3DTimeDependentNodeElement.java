package net.coderextreme.visitor;
public class X3DTimeDependentNodeElement implements org.web3d.x3d.sai.Time.X3DTimeDependentNode ,  VisitableElement
{
	private org.web3d.x3d.sai.Time.X3DTimeDependentNode delegate = null;
	public X3DTimeDependentNodeElement(org.web3d.x3d.sai.Time.X3DTimeDependentNode delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getDescriptionElement().accept(v);
		getElapsedTimeElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getIsPausedElement().accept(v);
		getMetadataElement().accept(v);
		getPauseTimeElement().accept(v);
		getResumeTimeElement().accept(v);
		getStartTimeElement().accept(v);
		getStopTimeElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFTimeElement getElapsedTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getElapsedTime()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFBoolElement getIsPausedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsPaused()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFTimeElement getPauseTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getPauseTime()));
}
	public SFTimeElement getResumeTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getResumeTime()));
}
	public SFTimeElement getStartTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getStartTime()));
}
	public SFTimeElement getStopTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getStopTime()));
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