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
    meta(content='PajekVisualizationPrototypes.x3d',name='title'),
    meta(content='Reverse engineer and hopefully elaborate on Pajek visualization structures',name='description'),
    meta(content='Don Brutzman and Elaine Reid',name='creator'),
    meta(content='29 March 2011',name='created'),
    meta(content='23 June 2014',name='modified'),
    meta(content='http://pajek.imfm.si',name='reference'),
    meta(content='network visualization',name='subject'),
    meta(content='under development',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Tools/Visualization/PajekVisualizationPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Arc is a network connection between Vertex nodes, displayed using Cylinder/Cone (arrow/arrowhead) geometry with modifiable color and transparency',name='Arc',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='name to identify this Arc',name='name',type='SFString',value='TODOprovideInitialValue'),
        field(accessType='inputOutput',appinfo='popup text describing this Arc',name='description',type='SFString',value='TODO customize this Arc description'),
        field(accessType='initializeOnly',appinfo='length of Arc between Vertex locations',name='cylinderHeight',type='SFFloat',value=1),
        field(accessType='inputOutput',appinfo='link to some other resource',name='url',type='MFString'),
        field(accessType='inputOutput',appinfo='location of Arc',name='cylinderTranslation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='see TODO items in ArcScript',name='coneTranslation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='orientation of Arc',name='rotation',type='SFRotation',value=(0,1,0,0)),
        field(accessType='inputOutput',appinfo='rendering choices: BallAndStick, Ball, Stick',name='displayMode',type='SFString',value='BallAndStick'),
        field(accessType='inputOutput',appinfo='diffuseColor of Arc',name='color',type='SFColor',value=(0.0000,0.0000,0.0000)),
        field(accessType='inputOutput',appinfo='transparency of Arc',name='transparency',type='SFFloat',value=0.0),
        field(accessType='inputOutput',appinfo='offset distance for Cone arrowhead; TODO this needs to match values in the Vertex protopye, which is iniitialized separately',name='ballRadius',type='SFFloat',value=1),
        field(accessType='inputOutput',appinfo='debug trace to Browser output console',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        #  First node determines node type of this prototype 
        children=[
        Anchor(DEF='ArcPrototypeRootNode',
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='url',protoField='url')]),
          children=[
          Group(
            children=[
            Transform(DEF='CylinderTransform',rotation=(-0.4367,0,0.8996,1.60563),translation=(-1.166,0.60861,-2.23229),
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='cylinderTranslation'),
                connect(nodeField='rotation',protoField='rotation')]),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='CylinderMaterial',diffuseColor=(0,0,0),shininess=0.8,specularColor=(0.8,0.8,0.8))),
                #  TODO these trial values are from Arc 1.6, radius is a candidate parameter 
                geometry=Cylinder(radius=0.02,
                  IS=IS(
                    connect=[
                    connect(nodeField='height',protoField='cylinderHeight')])))]),
            Transform(DEF='ConeTransform',rotation=(-0.4367,0,0.8996,1.6056),translation=(-1.49373,0.59592,-2.39136),
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='coneTranslation'),
                connect(nodeField='rotation',protoField='rotation')]),
              children=[
              Shape(
                geometry=Cone(bottomRadius=0.06,height=0.1),
                appearance=Appearance(
                  material=Material(DEF='ConeMaterial',diffuseColor=(0,0,0),shininess=.8,specularColor=(.8,.8,.8),
                    IS=IS(
                      connect=[
                      connect(nodeField='transparency',protoField='transparency')]))))])])]),
        Script(DEF='ArcScript',
          field=[
          field(accessType='inputOutput',appinfo='name to identify this Arc',name='name',type='SFString'),
          field(accessType='inputOutput',appinfo='popup text describing this Arc',name='description',type='SFString'),
          field(accessType='initializeOnly',appinfo='length of Arc between Vertex locations',name='cylinderHeight',type='SFFloat'),
          field(accessType='inputOutput',appinfo='link to some other resource',name='website',type='MFString'),
          field(accessType='inputOutput',appinfo='location of Arc',name='cylinderTranslation',type='SFVec3f'),
          field(accessType='inputOutput',appinfo='see TODO items in ArcScript',name='coneTranslation',type='SFVec3f'),
          field(accessType='inputOutput',appinfo='orientation of Arc',name='rotation',type='SFRotation'),
          field(accessType='inputOutput',appinfo='rendering choices: BallAndStick, Ball, Stick',name='displayMode',type='SFString'),
          field(accessType='inputOutput',appinfo='diffuseColor of Arc',name='color',type='SFColor'),
          field(accessType='inputOutput',appinfo='transparency of Arc',name='transparency',type='SFFloat'),
          field(accessType='inputOutput',appinfo='offset distance for Cone arrowhead; TODO this needs to match values in the Vertex protopye, which is iniitialized separately',name='ballRadius',type='SFFloat'),
          field(accessType='inputOutput',appinfo='debug trace to Browser output console',name='traceEnabled',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='name',protoField='name'),
            connect(nodeField='description',protoField='description'),
            connect(nodeField='cylinderHeight',protoField='cylinderHeight'),
            connect(nodeField='website',protoField='url'),
            connect(nodeField='cylinderTranslation',protoField='cylinderTranslation'),
            connect(nodeField='coneTranslation',protoField='coneTranslation'),
            connect(nodeField='rotation',protoField='rotation'),
            connect(nodeField='displayMode',protoField='displayMode'),
            connect(nodeField='color',protoField='color'),
            connect(nodeField='transparency',protoField='transparency'),
            connect(nodeField='ballRadius',protoField='ballRadius'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')]))]
        #  Add any ROUTEs here that connect Script to/from prior nodes within ProtoBody 
        )),
    ProtoDeclare(appinfo='Vertex is a node, typically connected by zero or more Arc segments, and displayed using Sphere geometry with modifiable color and transparency',name='Vertex',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='name to identify this Vertex',name='name',type='SFString',value='TODOprovideVertexName'),
        field(accessType='inputOutput',appinfo='popup text describing this Vertex',name='description',type='SFString',value='TODO customize this Vertex description'),
        field(accessType='inputOutput',appinfo='link to some other resource',name='url',type='MFString'),
        field(accessType='initializeOnly',appinfo='size of Vertex ball',name='radius',type='SFFloat',value=1),
        field(accessType='inputOutput',appinfo='rendering choices: BallAndStick, Ball, Stick',name='displayMode',type='SFString',value='BallAndStick'),
        field(accessType='inputOutput',appinfo='diffuseColor of Vertex',name='color',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='transparency of Vertex',name='transparency',type='SFFloat',value=0.0),
        field(accessType='inputOutput',appinfo='location of Vertex',name='translation',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='inputOutput',appinfo='labels to identify Vertex',name='vertexText',type='MFString'),
        field(accessType='inputOutput',appinfo='location of Text',name='textTranslation',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='inputOutput',appinfo='diffuseColor of Text',name='textColor',type='SFColor',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        #  First node determines node type of this prototype 
        children=[
        Group(DEF='VertexPrototypeRootNode',
          children=[
          Anchor(
            IS=IS(
              connect=[
              connect(nodeField='name',protoField='name'),
              connect(nodeField='description',protoField='description'),
              connect(nodeField='url',protoField='url')]),
            children=[
            Group(
              children=[
              Transform(
                IS=IS(
                  connect=[
                  connect(nodeField='translation',protoField='translation')]),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(
                      IS=IS(
                        connect=[
                        connect(nodeField='diffuseColor',protoField='color'),
                        connect(nodeField='transparency',protoField='transparency')]))),
                  geometry=Sphere(
                    IS=IS(
                      connect=[
                      connect(nodeField='radius',protoField='radius')])))]),
              #  TODO for future work: Billboard for text visibility 
              Transform(
                IS=IS(
                  connect=[
                  connect(nodeField='translation',protoField='textTranslation')]),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(
                      IS=IS(
                        connect=[
                        connect(nodeField='diffuseColor',protoField='textColor')]))),
                  geometry=Text(
                    IS=IS(
                      connect=[
                      connect(nodeField='string',protoField='vertexText')]),
                    #  TODO do we really want to honor Pajek's default Text family? 
                    fontStyle=FontStyle(family=["SANS"],size=0.20000)))])])])])]
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        )),
    ProtoDeclare(appinfo='Text describing what the Vertices and Arcs are about',name='NetworkText',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='information to identify the Integral Network',name='text',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          Group(
            children=[
            Transform(
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.9,0.9,0.9))),
                geometry=Text(DEF='NetworkText',
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='text')]),
                  fontStyle=FontStyle(),))])])])])),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,0.5,0.7),(0,0.4,0.7),(0.6,0.5,0.7)],skyAngle=[1.309,1.571],skyColor=[(0,0.5,0.8),(0,0.6,0.7),(0.6,0.6,0.7)]),
    PointLight(ambientIntensity=1,location=(0,0,5),radius=30),
    NavigationInfo(transitionType=["ANIMATE"],type=["EXAMINE","FLY","ANY"]),
    Viewpoint(description='Inspect 15JAN2010Newman',orientation=(1,0,0,-0.0997),position=(0,2,20)),
    #  type="3D" <date day ="3" month="5" year="2011"/> 
    Transform(DEF='infogroup',translation=(-8,2,-4),
      children=[
      Transform(DEF='NetText',translation=(0,6,0),
        children=[
        ProtoInstance(name='NetworkText',
          fieldValue=[
          fieldValue(name='text',value=["15JAN2010"])])])]),
    Group(
      children=[
      Transform(
        children=[
        ProtoInstance(name='Vertex',
          fieldValue=[
          fieldValue(name='name',value='Vertex 1'),
          fieldValue(name='description',value='2010-01-15-ARMY.MIL'),
          fieldValue(name='vertexText',value=["2010-01-15-ARMY.MIL"]),
          fieldValue(name='textTranslation',value=(0.06344,-0.26178,-0.55101)),
          fieldValue(name='textColor',value=(0,0,0)),
          fieldValue(name='url',value=["http://www.army.mil"]),
          fieldValue(name='translation',value=(0.06344,-0.26178,-0.55101)),
          fieldValue(name='radius',value=.1500),
          fieldValue(name='displayMode',value='BallAndStick'),
          fieldValue(name='color',value=(0.0000,0.0000,0.0000)),
          fieldValue(name='transparency',value=0.0)]),
        ProtoInstance(name='Arc',
          fieldValue=[
          fieldValue(name='name',value='1.24'),
          fieldValue(name='description',value='From blah to blah'),
          fieldValue(name='url',value=["http://www.google.com"]),
          fieldValue(name='cylinderHeight',value=0.64770),
          fieldValue(name='cylinderTranslation',value=(-0.35062,-0.44066,-0.60713)),
          fieldValue(name='coneTranslation',value=(-.48422,-.53116,-.63552)),
          fieldValue(name='rotation',value=(-11.22472,0.00000,52.81325,2.15598)),
          fieldValue(name='displayMode',value='BallAndStick'),
          fieldValue(name='color',value=(0.0000,0.0000,0.0000)),
          fieldValue(name='transparency',value=0.0),
          fieldValue(name='ballRadius',value=1)]),
        ProtoInstance(name='Vertex',
          fieldValue=[
          fieldValue(name='name',value='Vertex 2'),
          fieldValue(name='description',value='2010-01-15BLOGS.STATE.GOV-INDEX.PHP'),
          fieldValue(name='vertexText',value=["2010-01-15BLOGS.STATE.GOV-INDEX.PHP"]),
          fieldValue(name='textTranslation',value=(1.43526,1.19707,0.67279)),
          fieldValue(name='textColor',value=(0,0,0)),
          fieldValue(name='url',value=["http://www.state.gov"]),
          fieldValue(name='translation',value=(1.28526,1.19707,0.67279)),
          fieldValue(name='radius',value=0.1500),
          fieldValue(name='displayMode',value='BallAndStick'),
          fieldValue(name='color',value=(0.5020,0.0000,0.0000)),
          fieldValue(name='transparency',value=0.0)]),
        ProtoInstance(name='Arc',
          fieldValue=[
          fieldValue(name='name',value='1.26'),
          fieldValue(name='description',value='From blah1 to blah1'),
          fieldValue(name='url',value=["http://www.google.com"]),
          fieldValue(name='cylinderHeight',value=1.28361),
          fieldValue(name='cylinderTranslation',value=(-0.12911,0.32068,-0.81718)),
          fieldValue(name='coneTranslation',value=(-0.16106,0.75793,-1.01700)),
          fieldValue(name='rotation',value=(-53.23500,0.00000,8.51149,0.43344)),
          fieldValue(name='displayMode',value='BallAndStick'),
          fieldValue(name='color',value=(0,0,0)),
          fieldValue(name='transparency',value=0.0),
          fieldValue(name='ballRadius',value=1)]),
        ProtoInstance(name='Vertex',
          fieldValue=[
          fieldValue(name='name',value='Vertex 3'),
          fieldValue(name='description',value='2010-01-15-FEEDS.FEEDBURNER.COM-DIPNOTE'),
          fieldValue(name='vertexText',value=["2010-01-15-FEEDS.FEEDBURNER.COM-DIPNOTE"]),
          fieldValue(name='textColor',value=(0,0,0)),
          fieldValue(name='textTranslation',value=(0.08377,1.98542,-1.19849)),
          fieldValue(name='url',value=["http://www.feedburner.com"]),
          fieldValue(name='translation',value=(-0.06623,1.98542,-1.19849)),
          fieldValue(name='radius',value=.1500),
          fieldValue(name='displayMode',value='BallAndStick'),
          fieldValue(name='color',value=(1.0000,0.0000,0.0000)),
          fieldValue(name='transparency',value=0.0)]),
        ProtoInstance(name='Arc',
          fieldValue=[
          fieldValue(name='name',value='1.39'),
          fieldValue(name='description',value='From blah2 to blah2'),
          fieldValue(name='url',value=["http://www.google.com"]),
          fieldValue(name='cylinderHeight',value=1.12537),
          fieldValue(name='cylinderTranslation',value=(-0.35500,-0.38541,-1.02982)),
          fieldValue(name='coneTranslation',value=(-0.54712,-0.47389,-1.37249)),
          fieldValue(name='rotation',value=(-95.76386,0.00000,53.68924,1.79233)),
          fieldValue(name='displayMode',value='BallAndStick'),
          fieldValue(name='color',value=(0.0000,0.0000,0.0000)),
          fieldValue(name='transparency',value=0.0),
          fieldValue(name='ballRadius',value=1)])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PajekVisualizationPrototypes.py")
