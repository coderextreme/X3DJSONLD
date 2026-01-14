package net.coderextreme.visitor;
public class ListenerPointSourceElement extends org.web3d.x3d.jsail.Sound.ListenerPointSource implements VisitableElement
{
	private org.web3d.x3d.jsail.Sound.ListenerPointSource delegate = null;
	public ListenerPointSourceElement(org.web3d.x3d.jsail.Sound.ListenerPointSource delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getDescriptionElement().accept(v);
		getDopplerEnabledElement().accept(v);
		getElapsedTimeElement().accept(v);
		getEnabledElement().accept(v);
		getGainElement().accept(v);
		getInterauralDistanceElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getIsPausedElement().accept(v);
		getMetadataElement().accept(v);
		getOrientationElement().accept(v);
		getPauseTimeElement().accept(v);
		getPositionElement().accept(v);
		getResumeTimeElement().accept(v);
		getStartTimeElement().accept(v);
		getStopTimeElement().accept(v);
		getTrackCurrentViewElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getDopplerEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getDopplerEnabled()));
}
	public SFTimeElement getElapsedTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getElapsedTime()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFFloatElement getGainElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getGain()));
}
	public SFFloatElement getInterauralDistanceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getInterauralDistance()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFBoolElement getIsPausedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsPaused()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFRotationElement getOrientationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getOrientation()));
}
	public SFTimeElement getPauseTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getPauseTime()));
}
	public SFVec3fElement getPositionElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getPosition()));
}
	public SFTimeElement getResumeTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getResumeTime()));
}
	public SFTimeElement getStartTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getStartTime()));
}
	public SFTimeElement getStopTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getStopTime()));
}
	public SFBoolElement getTrackCurrentViewElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getTrackCurrentView()));
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
