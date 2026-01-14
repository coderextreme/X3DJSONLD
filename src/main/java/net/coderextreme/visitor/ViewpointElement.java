package net.coderextreme.visitor;
public class ViewpointElement extends org.web3d.x3d.jsail.Navigation.Viewpoint implements VisitableElement
{
	private org.web3d.x3d.jsail.Navigation.Viewpoint delegate = null;
	public ViewpointElement(org.web3d.x3d.jsail.Navigation.Viewpoint delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBindTimeElement().accept(v);
		getCenterOfRotationElement().accept(v);
		getDescriptionElement().accept(v);
		getFarDistanceElement().accept(v);
		getFieldOfViewElement().accept(v);
		getISElement().accept(v);
		getIsBoundElement().accept(v);
		getJumpElement().accept(v);
		getMetadataElement().accept(v);
		getNavigationInfoElement().accept(v);
		getNearDistanceElement().accept(v);
		getOrientationElement().accept(v);
		getPositionElement().accept(v);
		getRetainUserOffsetsElement().accept(v);
		getViewAllElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFTimeElement getBindTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getBindTime()));
}
	public SFVec3fElement getCenterOfRotationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getCenterOfRotation()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFFloatElement getFarDistanceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getFarDistance()));
}
	public SFFloatElement getFieldOfViewElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getFieldOfView()));
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
	public SFVec3fElement getPositionElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getPosition()));
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
