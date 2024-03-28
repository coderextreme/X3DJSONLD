package net.coderextreme.visitor;
public class ChannelSplitterElement extends org.web3d.x3d.jsail.Sound.ChannelSplitter implements VisitableElement
{
	private org.web3d.x3d.jsail.Sound.ChannelSplitter delegate = null;
	public ChannelSplitterElement(org.web3d.x3d.jsail.Sound.ChannelSplitter delegate) {
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
		getMetadataElement().accept(v);
		getOutputsElement().accept(v);
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
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFNodeElement getOutputsElement() { 		 return new MFNodeElement<outputs>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getOutputs()));
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
