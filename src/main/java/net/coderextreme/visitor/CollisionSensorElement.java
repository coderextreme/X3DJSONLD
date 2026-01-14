package net.coderextreme.visitor;
public class CollisionSensorElement extends org.web3d.x3d.jsail.RigidBodyPhysics.CollisionSensor implements VisitableElement
{
	private org.web3d.x3d.jsail.RigidBodyPhysics.CollisionSensor delegate = null;
	public CollisionSensorElement(org.web3d.x3d.jsail.RigidBodyPhysics.CollisionSensor delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getColliderElement().accept(v);
		getContactsElement().accept(v);
		getDescriptionElement().accept(v);
		getEnabledElement().accept(v);
		getIntersectionsElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getMetadataElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getColliderElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getCollider()));
}
	public MFNodeElement getContactsElement() { 		 return new MFNodeElement<contacts>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getContacts()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public MFNodeElement getIntersectionsElement() { 		 return new MFNodeElement<intersections>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getIntersections()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
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
