package net.coderextreme.visitor;
public class StreamAudioDestinationElement extends org.web3d.x3d.jsail.Sound.StreamAudioDestination implements VisitableElement
{
	private org.web3d.x3d.jsail.Sound.StreamAudioDestination delegate = null;
	public StreamAudioDestinationElement(org.web3d.x3d.jsail.Sound.StreamAudioDestination delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getChannelCountElement().accept(v);
		getChannelCountModeElement().accept(v);
		getChannelInterpretationElement().accept(v);
		getChildrenElement().accept(v);
		getDescriptionElement().accept(v);
		getEnabledElement().accept(v);
		getGainElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getMediaDeviceIDElement().accept(v);
		getMetadataElement().accept(v);
		getStreamIdentifierElement().accept(v);
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
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFFloatElement getGainElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getGain()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFStringElement getMediaDeviceIDElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMediaDeviceID()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getStreamIdentifierElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getStreamIdentifier()));
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
