###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    component(level=1,name='DIS'),
    meta(content='DISEntityPrototypes.x3d',name='title'),
    meta(content='Prototype definitions for DISEntityManager and DISEntityTypeMapping.',name='description'),
    meta(content='Alan Hudson',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='26 April 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under development.',name='warning'),
    meta(content='http://www.xj3d.org/extensions/DIS.html',name='reference'),
    meta(content='http://www.yumetech.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/DISEntityPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ============================================================ 
    children=[
    WorldInfo(title='DISEntityPrototypes.x3d'),
    ProtoDeclare(appinfo='A DISEntityManager node notifies content when new entities arrive or current entities leave.',documentation='http://www.xj3d.org/extensions/DIS.html#DISEntityManager',name='DISEntityManager',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='[065535]',name='siteID',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[065535]',name='applicationID',type='SFInt32',value=1),
        field(accessType='inputOutput',appinfo='[065535] field under consideration',name='entityID',type='SFInt32',value=0),
        field(accessType='inputOutput',name='address',type='SFString',value='localhost'),
        field(accessType='inputOutput',appinfo='[065535]',name='port',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[DISEntityTypeMapping]',name='mapping',type='MFNode',
          #  default NULL 
          ),
        field(accessType='outputOnly',appinfo='[EspduTransform]',name='addedEntities',type='MFNode'),
        field(accessType='outputOnly',appinfo='[EspduTransform]',name='removedEntities',type='MFNode'),
        field(accessType='inputOutput',appinfo='[X3DMetadataObject]',name='metadata',type='SFNode',
          #  default NULL 
          )]),
      ProtoBody=ProtoBody(
        #  X3DChildNode node type 
        children=[
        Group(),])),
    #  ============================================================ 
    ProtoDeclare(appinfo='A DISEntityTypeMapping node provides a mapping from DIS Entity type information to an X3D model. This model is model provides a visual and behavioral representation of the entity for usage in X3D simulations. The mappings are done by selecting the most specific record which fits the entity. A value of 0 is considered a wildcard. All fields after the first zero must be zero as well.',documentation='http://www.xj3d.org/extensions/DIS.html#DISEntityTypeMapping',name='DISEntityTypeMapping',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='[0255]',name='kind',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='[0255]',name='domain',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='[0255]',name='country',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='[0255]',name='category',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='[0255]',name='subcategory',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='[0255]',name='specific',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='[0255]',name='extra',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='identifier',type='SFString'),
        field(accessType='inputOutput',appinfo='[X3DMetadataObject]',name='metadata',type='SFNode',
          #  default NULL 
          )]),
      ProtoBody=ProtoBody(
        #  X3DInfoNode node type 
        children=[
        MetadataSet(name='PlaceholderNode')])),
    #  ============================================================ 
    #  Default content 
    Viewpoint(description='default viewpoint',position=(0,0,110)),
    EspduTransform(),
    TransmitterPdu(relativeAntennaLocation=(0,0,0),transmitFrequencyBandwidth=0.0),
    ProtoInstance(DEF='EntityManager',name='DISEntityManager',
      fieldValue=[
      fieldValue(name='address',value='224.2.181.145'),
      fieldValue(name='port',value=62040),
      fieldValue(name='siteID',value=0),
      fieldValue(name='applicationID',value=1),
      fieldValue(name='mapping',
        #  n.b. nested prototypes 
        children=[
        ProtoInstance(name='DISEntityTypeMapping',
          fieldValue=[
          fieldValue(name='kind',value=1),
          fieldValue(name='domain',value=1),
          fieldValue(name='country',value=225),
          fieldValue(name='category',value=1),
          fieldValue(name='subcategory',value=1),
          fieldValue(name='specific',value=1),
          fieldValue(name='identifier',value='m1a1tank.x3dv')]),
        ProtoInstance(name='DISEntityTypeMapping',
          fieldValue=[
          fieldValue(name='kind',value=1),
          fieldValue(name='domain',value=3),
          fieldValue(name='country',value=225),
          fieldValue(name='category',value=4),
          fieldValue(name='identifier',value='dog.x3dv')]),
        ProtoInstance(name='DISEntityTypeMapping',
          fieldValue=[
          fieldValue(name='kind',value=1),
          fieldValue(name='domain',value=1),
          fieldValue(name='identifier',value='land.x3dv')]),
        ProtoInstance(name='DISEntityTypeMapping',
          fieldValue=[
          fieldValue(name='kind',value=1),
          fieldValue(name='domain',value=1),
          fieldValue(name='country',value=225),
          fieldValue(name='identifier',value='USAland.x3dv')]),
        ProtoInstance(name='DISEntityTypeMapping',
          fieldValue=[
          fieldValue(name='kind',value=1),
          fieldValue(name='domain',value=3),
          fieldValue(name='specific',value=1),
          fieldValue(name='identifier',value='surface.x3dv')])])]),
    Group(DEF='EntityHolder'),
    ROUTE(fromField='addedEntities',fromNode='EntityManager',toField='addChildren',toNode='EntityHolder'),
    ROUTE(fromField='removedEntities',fromNode='EntityManager',toField='removeChildren',toNode='EntityHolder')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DISEntityPrototypes.py")
