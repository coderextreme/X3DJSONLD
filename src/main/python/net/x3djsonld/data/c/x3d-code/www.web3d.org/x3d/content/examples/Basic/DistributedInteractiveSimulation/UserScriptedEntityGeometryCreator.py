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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(level=2,name='DIS'),
    meta(content='UserScriptedEntityGeometryCreator.x3d',name='title'),
    meta(content='Example scene for DISEntityManager, setting up a Script to process new arrivals',name='description'),
    meta(content='Alan Hudson and Justin Couch',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='4 March 2005',name='created'),
    meta(content='8 January 2009',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='UserScriptedEntityGeometryCreatorOriginal.x3dv',name='reference'),
    meta(content='http://www.xj3d.org/extensions/DIS_examples.html',name='reference'),
    meta(content='https://www.web3d.org/message_boards/viewtopic.php?p=1349&sid=fd84816e9177c37051f6b525ca1150ea',name='reference'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/dis.html#DISEntityManager',name='reference'),
    meta(content='IEEE Distributed Interactive Simulation DIS',name='subject'),
    meta(content='under development',name='warning'),
    meta(content='missing script source',name='error'),
    meta(content='http://bugzilla.xj3d.org/show_bug.cgi?id=561',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/UserScriptedEntityGeometryCreator.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Xj3D, http://www.xj3d.org',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='UserScriptedEntityGeometryCreator.x3d'),
    DISEntityManager(DEF='EntityManager'),
    #  TODO how does the DISEntityManager know what to send to the EntityHolder? 
    Group(DEF='EntityHolder'),
    ROUTE(fromField='addedEntities',fromNode='EntityManager',toField='addChildren',toNode='EntityHolder'),
    ROUTE(fromField='removedEntities',fromNode='EntityManager',toField='removeChildren',toNode='EntityHolder'),
    Script(DEF='EntityProcessor',directOutput=True,url=["EntityProcessor.class","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EntityProcessor.class"],
      field=[
      field(accessType='inputOutput',name='addedEntities',type='MFNode')]),
    ROUTE(fromField='addedEntities',fromNode='EntityManager',toField='addedEntities',toNode='EntityProcessor')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for UserScriptedEntityGeometryCreator.py")
