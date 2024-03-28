package net.coderextreme.visitor;
public class WaveShaperElement extends org.web3d.x3d.jsail.Sound.WaveShaper implements VisitableElement
{
	private org.web3d.x3d.jsail.Sound.WaveShaper delegate = null;
	public WaveShaperElement(org.web3d.x3d.jsail.Sound.WaveShaper delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getChannelCountElement().accept(v);
		getChannelCountModeElement().accept(v);
		getChannelInterpretationElement().accept(v);
		getChildrenElement().accept(v);
		getDescriptionElement().accept(v);
		getElapsedTimeElement().accept(v);
		getEnabledElement().accept(v);
		getGainElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getIsPausedElement().accept(v);
		getMetadataElement().accept(v);
		getOversampleElement().accept(v);
		getPauseTimeElement().accept(v);
		getResumeTimeElement().accept(v);
		getStartTimeElement().accept(v);
		getStopTimeElement().accept(v);
		getTailTimeElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFInt32Element getChannelCountElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getChannelCount()));
}
	public SFStringElement getChannelCountModeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getChannelCountMode()));
}
	public SFStringElement getChannelInterpretationElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getChannelInterpretation()));
}
	public MFNodeElement getChildrenElement() { 		 return new MFNodeElement(delegate.getChildren());
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFTimeElement getElapsedTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getElapsedTime()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFFloatElement getGainElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getGain()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFBoolElement getIsPausedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsPaused()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getOversampleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getOversample()));
}
	public SFTimeElement getPauseTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getPauseTime()));
}
	public SFTimeElement getResumeTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getResumeTime()));
}
	public SFTimeElement getStartTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getStartTime()));
}
	public SFTimeElement getStopTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getStopTime()));
}
	public SFTimeElement getTailTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getTailTime()));
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
