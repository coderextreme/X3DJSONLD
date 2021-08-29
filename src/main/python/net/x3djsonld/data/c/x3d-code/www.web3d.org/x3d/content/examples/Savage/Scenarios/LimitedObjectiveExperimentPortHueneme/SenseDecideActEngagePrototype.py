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
    meta(content='SenseDecideActEngagePrototype.x3d',name='title'),
    meta(content='Sense-Decide-Act Prototype utilized for Anti-Terrorism/Force Protection Simulation.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='6 February 2002',name='created'),
    meta(content='21 February 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/LimitedObjectiveExperimentPortHueneme/SenseDecideActEngagePrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='RHIB',url=["../../Scenarios/UssColeTerroristAttack/RHIBPrototype.wrl#RHIB","RHIBPrototype.wrl#RHIB","RHIBPrototype.x3d#RHIB","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/RHIBPrototype.wrl#RHIB","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/RHIBBoatPrototype.x3d#RHIB"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    ProtoDeclare(name='SenseDecideActEngagePrototype',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='engagementPosition',type='SFVec3f'),
        field(accessType='inputOutput',name='engagementTextPosition',type='SFVec3f')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          NavigationInfo(type=["EXAMINE","FLY","ANY"],visibilityLimit=24000),
          Background(groundAngle=[1.309],groundColor=[(0.2,0.2,0.8),(1.0,1.0,1.0)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
          Transform(DEF='OverallTransform',
            children=[
            Transform(
              children=[
              Transform(DEF='EngageSphereTransform',
                IS=IS(
                  connect=[
                  connect(nodeField='scale',protoField='engagementPosition')]),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0,0),transparency=.75)),
                  geometry=Sphere(radius=.5))])]),
            Transform(DEF='EngageTextTransform',
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='engagementTextPosition')]),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(1,0,0))),
                geometry=Text(DEF='EngagementRangeValue',string=["Engagement Range"],
                  fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=3,style_='BOLD')))])])])])),
    #  End of Proto definition, now we're just showing how to use it. 
    Transform(
      children=[
      Viewpoint(description='Initial View point',position=(0,100,500)),
      Transform(translation=(0,2,0),
        children=[
        ProtoInstance(DEF='ColeRhib1',name='RHIB'),
        Transform(translation=(1,-.5,0),
          children=[
          Inline(url=["../../../HumanoidAnimation/NancyStandShootRifleM24.wrl","http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/NancyStandShootRifleM24.wrl"]),
          Transform(translation=(0,1.5,0),
            children=[
            ProtoInstance(DEF='myRanges',name='SenseDecideActEngagePrototype',
              fieldValue=[
              fieldValue(name='engagementPosition',value=(400,400,400)),
              fieldValue(name='engagementTextPosition',value=(0.0,100,400))])])])])]),
    Transform(DEF='PlaneTransform',
      children=[
      Shape(
        geometry=Box(size=(1000,2,1000)),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,.5),emissiveColor=(0,0,.5))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SenseDecideActEngagePrototype.py")
