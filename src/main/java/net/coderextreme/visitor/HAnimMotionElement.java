package net.coderextreme.visitor;
public class HAnimMotionElement extends org.web3d.x3d.jsail.HAnim.HAnimMotion implements VisitableElement
{
	private org.web3d.x3d.jsail.HAnim.HAnimMotion delegate = null;
	public HAnimMotionElement(org.web3d.x3d.jsail.HAnim.HAnimMotion delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getChannelsElement().accept(v);
		getChannelsEnabledElement().accept(v);
		getCycleTimeElement().accept(v);
		getDescriptionElement().accept(v);
		getElapsedTimeElement().accept(v);
		getEnabledElement().accept(v);
		getEndFrameElement().accept(v);
		getFrameCountElement().accept(v);
		getFrameDurationElement().accept(v);
		getFrameIncrementElement().accept(v);
		getFrameIndexElement().accept(v);
		getISElement().accept(v);
		getJointsElement().accept(v);
		getLoaElement().accept(v);
		getLoopElement().accept(v);
		getMetadataElement().accept(v);
		getNameElement().accept(v);
		getStartFrameElement().accept(v);
		getValuesElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getChannelsElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getChannels()));
}
	public MFBoolElement getChannelsEnabledElement() { 		 return new MFBoolElement(new org.web3d.x3d.jsail.fields.MFBool(delegate.getChannelsEnabled()));
}
	public SFTimeElement getCycleTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getCycleTime()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFTimeElement getElapsedTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getElapsedTime()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFInt32Element getEndFrameElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEndFrame()));
}
	public SFInt32Element getFrameCountElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getFrameCount()));
}
	public SFTimeElement getFrameDurationElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getFrameDuration()));
}
	public SFInt32Element getFrameIncrementElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getFrameIncrement()));
}
	public SFInt32Element getFrameIndexElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getFrameIndex()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFStringElement getJointsElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getJoints()));
}
	public SFInt32Element getLoaElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getLoa()));
}
	public SFBoolElement getLoopElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getLoop()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
}
	public SFInt32Element getStartFrameElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getStartFrame()));
}
	public MFFloatElement getValuesElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getValues()));
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
