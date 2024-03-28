package net.coderextreme.visitor;
public class X3DViewpointNodeElement implements org.web3d.x3d.sai.Navigation.X3DViewpointNode ,  VisitableElement
{
	private org.web3d.x3d.sai.Navigation.X3DViewpointNode delegate = null;
	public X3DViewpointNodeElement(org.web3d.x3d.sai.Navigation.X3DViewpointNode delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBindTimeElement().accept(v);
		getDescriptionElement().accept(v);
		getFarDistanceElement().accept(v);
		getISElement().accept(v);
		getIsBoundElement().accept(v);
		getJumpElement().accept(v);
		getMetadataElement().accept(v);
		getNavigationInfoElement().accept(v);
		getNearDistanceElement().accept(v);
		getOrientationElement().accept(v);
		getRetainUserOffsetsElement().accept(v);
		getViewAllElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFTimeElement getBindTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getBindTime()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFFloatElement getFarDistanceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getFarDistance()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsBoundElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsBound()));
}
	public SFBoolElement getJumpElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getJump()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFNodeElement getNavigationInfoElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getNavigationInfo()));
}
	public SFFloatElement getNearDistanceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getNearDistance()));
}
	public SFRotationElement getOrientationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getOrientation()));
}
	public SFBoolElement getRetainUserOffsetsElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getRetainUserOffsets()));
}
	public SFBoolElement getViewAllElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getViewAll()));
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
