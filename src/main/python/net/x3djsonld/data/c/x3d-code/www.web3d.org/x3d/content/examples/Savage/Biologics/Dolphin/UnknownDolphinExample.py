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
    meta(content='UnknownDolphinExample.x3d',name='title'),
    meta(content='Manual translation of Dolphin model from the Prototype Repository.',name='description'),
    meta(content='unknown, if you know then please contact brutzman@nps.navy.mil',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='22 January 2001',name='created'),
    meta(content='31 March 2008',name='modified'),
    meta(content='NavyDolphinLocatesSunkenBoatAugust1997.txt',name='reference'),
    meta(content='http://www.chinfo.navy.mil/navpalib/news/navywire/nwsa97/nwsa0822.txt',name='reference'),
    meta(content='http://www.vrml-content.org',name='reference'),
    meta(content='VRML X3D Prototype ProtoRepository Dolphin',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Biologics/Dolphin/UnknownDolphinExample.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='Dolphin',url=["UnknownDolphinPrototype.wrl#Dolphin","https://savage.nps.edu/Savage/Biologics/Dolphin/UnknownDolphinPrototype.wrl#Dolphin","UnknownDolphinPrototype.x3d#Dolphin","https://savage.nps.edu/Savage/Biologics/Dolphin/UnknownDolphinPrototype.x3d#Dolphin"],
      field=[
      field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
      field(accessType='inputOutput',name='collide',type='SFBool'),
      field(accessType='outputOnly',name='collideTime',type='SFTime')]),
    #  ==================== 
    ProtoInstance(DEF='DOLPHIN',name='Dolphin'),
    Background(groundAngle=[1.57079],groundColor=[(0.15,0.3,0.35),(0.35,0.65,0.65)],skyAngle=[1.57079],skyColor=[(1,1,1),(0.35,0.65,0.65)]),
    DirectionalLight(ambientIntensity=.7,color=(.55,.75,.75),direction=(0,-1,0)),
    Viewpoint(description='SideFar',position=(0,0,9)),
    Viewpoint(description='Side',position=(0,0,4.059)),
    Viewpoint(description='Front',orientation=(0,1,0,1.56),position=(4.097,-.42,0.044)),
    Viewpoint(description='Bottom',orientation=(.5573,.6209,-.5513,2.0205),position=(.617,-6.46,0.006)),
    Viewpoint(description='Top',orientation=(.5966,-.5438,-.5902,4.1469),position=(-.688,6.516,-0.008)),
    Viewpoint(description='CloseUpAngle',orientation=(-0.0384,.9991,0.0161,.7972),position=(1.896,-.333,1.341)),
    TimeSensor(DEF='TS',loop=True),
    ROUTE(fromField='fraction_changed',fromNode='TS',toField='set_fraction',toNode='DOLPHIN')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for UnknownDolphinExample.py")
