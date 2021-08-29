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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='KelpPrototype.x3d',name='title'),
    meta(content='Creates Kelp Prototype - this file uses Bulb and is used by KelpExamplesNoBase.',name='description'),
    meta(content='Joseph Cannon, Dan DeVos',name='creator'),
    meta(content='18 March 1999',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://faculty.nps.edu/brutzman/kelp',name='reference'),
    meta(content='KelpForestDesignPaperWeb3dSymposiumFebruary2002.pdf',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestDesignPaperWeb3dSymposiumFebruary2002.pdf',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Teaching3d-KelpForestCaseStudy.pdf',name='reference'),
    meta(content='All content has permissions for free use. Please provide credit to the Naval Postgraduate School (NPS) Modeling Virtual Environments and Simulation (MOVES) Institute.',name='accessRights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpPrototype.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='KelpPrototype.x3d'),
    ProtoDeclare(appinfo='Kelp strands and bulbs with no base',name='Kelp',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='frontBladeSize',type='SFVec3f',value=(0.7,0.7,0.7)),
        field(accessType='inputOutput',name='frontSideBladeHeight',type='SFVec3f',value=(0,4,0)),
        field(accessType='inputOutput',name='rightBladeSize',type='SFVec3f',value=(0.7,0.7,0.7)),
        field(accessType='inputOutput',name='rightSideBladeHeight',type='SFVec3f',value=(0,12,0)),
        field(accessType='inputOutput',name='rearBladeSize',type='SFVec3f',value=(0.4,0.4,0.4)),
        field(accessType='inputOutput',name='rearSideBladeHeight',type='SFVec3f',value=(0,20,0)),
        field(accessType='inputOutput',name='leftBladeSize',type='SFVec3f',value=(0.4,0.4,0.4)),
        field(accessType='inputOutput',name='leftSideBladeHeight',type='SFVec3f',value=(0,24,0))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(DEF='stipe',center=(0,-16,0),translation=(0,14,0),
            children=[
            Shape(DEF='stemShape',
              appearance=Appearance(DEF='kelpColor',
                material=Material(diffuseColor=(0.882,0.757,0.184))),
              geometry=Cylinder(bottom=False,height=28.0,radius=0.2,top=False)),
            Transform(DEF='horizontalStipe',center=(0,16,0),rotation=(0,0,1,1.5707),scale=(0.5,0.3,0.5),translation=(1.3,0,0),
              children=[
              Transform(
                children=[
                Shape(USE='stemShape')]),
              Transform(DEF='blade_X1',rotation=(0,1,0,1.0),translation=(0,12,0),
                children=[
                Transform(DEF='bladeRotateZ',rotation=(0,0,1,-1.2),
                  children=[
                  Transform(DEF='BLADE',center=(-0.5,0,0),translation=(1,0,0),
                    children=[
                    Inline(DEF='bulb',url=["KelpBulb.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpBulb.x3d","KelpBulb.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpBulb.wrl"])])])]),
              Transform(DEF='blade_X2',rotation=(0,1,0,-1.0),
                children=[
                Transform(USE='bladeRotateZ')]),
              Transform(DEF='blade_X3',rotation=(0,1,0,4.342),translation=(0,-12,0),
                children=[
                Transform(USE='bladeRotateZ')])]),
            Transform(translation=(0,14,0),
              children=[
              Shape(
                appearance=Appearance(USE='kelpColor'),
                geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.2,0),(0.184,-0.076),(0.142,-0.142),(0.076,-0.184),(0,-0.2),(-0.076,-0.184),(-0.142,-0.142),(-0.184,-0.076),(-0.2,-0),(-0.184,0.076),(-0.142,0.142),(-0.076,0.184),(0,0.2),(0.076,0.184),(0.142,0.142),(0.184,0.076),(0.2,0)],scale=[(1,1),(0.8,0.8),(0.7,0.7),(0.6,0.6),(0.5,0.5)],spine=[(0,0,0),(0.15,0.77,0),(0.59,1.41,0),(1.23,1.85,0),(2,2,0)]))])]),
          Transform(DEF='blade_Y1',rotation=(0,0,1,1.2),
            IS=IS(
              connect=[
              connect(nodeField='scale',protoField='frontBladeSize'),
              connect(nodeField='translation',protoField='frontSideBladeHeight')]),
            children=[
            Transform(USE='BLADE')]),
          Transform(DEF='blade_Y2',rotation=(0,1,0,4.2),
            IS=IS(
              connect=[
              connect(nodeField='scale',protoField='rightBladeSize'),
              connect(nodeField='translation',protoField='rightSideBladeHeight')]),
            children=[
            Transform(DEF='bladeToTheSide',rotation=(1,0,0,3.142),
              children=[
              Transform(rotation=(0,0,1,-1.2),
                children=[
                Transform(DEF='rotateBlade90',center=(-0.5,0,0),rotation=(1,0,0,1.5707),translation=(1,0,0),
                  children=[
                  Inline(USE='bulb')])])])]),
          Transform(DEF='blade_Y3',rotation=(0,1,0,3.2),
            IS=IS(
              connect=[
              connect(nodeField='scale',protoField='rearBladeSize'),
              connect(nodeField='translation',protoField='rearSideBladeHeight')]),
            children=[
            Transform(DEF='Blade-Z',rotation=(1,0,0,3.142),
              children=[
              Transform(rotation=(0,0,1,-1.2),
                children=[
                Transform(USE='BLADE')])])]),
          Transform(DEF='blade_Y4',rotation=(0,1,0,1.2),
            IS=IS(
              connect=[
              connect(nodeField='scale',protoField='leftBladeSize'),
              connect(nodeField='translation',protoField='leftSideBladeHeight')]),
            children=[
            Transform(USE='bladeToTheSide')]),
          TimeSensor(DEF='Clock',cycleInterval=5.5,loop=True),
          OrientationInterpolator(DEF='horizontalStipeMover',key=[0,0.25,0.5,0.75,1.0],keyValue=[(0,0,1,1.471),(0,0,1,1.571),(0,0,1,1.671),(0,0,1,1.571),(0,0,1,1.471)])]),
        ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='horizontalStipeMover'),
        ROUTE(fromField='value_changed',fromNode='horizontalStipeMover',toField='set_rotation',toNode='horizontalStipe')])),
    #  Example use of this prototype is in KelpNoBase.x3d, .wrl 
    Viewpoint(description='click message to view example',position=(0,0,8)),
    #  Redirection text in case a user examines this PROTO file via a 3D browser: 
    Anchor(DEF='TouchTextForExample',description='KelpNoBase',parameter=["target=_blank"],url=["KelpExamplesNoBase.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpExamplesNoBase.x3d","KelpExamplesNoBase.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpExamplesNoBase.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["KelpPrototype","is a Prototype declaration file.","","To see an example using 3 instances of","this new node, click this text and view","KelpNoBase scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5))),
      #  Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip 
      Shape(
        geometry=Box(size=(8,3,.001)),
        appearance=Appearance(
          material=Material(transparency=1)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for KelpPrototype.py")
