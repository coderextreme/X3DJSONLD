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
    component(level=1,name='Geospatial'),
    meta(content='KmlPrototypes.x3d',name='title'),
    meta(content='X3D prototypes to render Keyhole Markup Language (KML) information.',name='description'),
    meta(content='20 August 2007',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='under development',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/KmlPrototypes.x3d',name='identifier'),
    meta(content='http://www.opengeospatial.org/standards/kml',name='reference'),
    meta(content='http://schemas.opengis.net/kml',name='reference'),
    meta(content='http://schemas.opengis.net/kml/2.2.0/ogckml22.xsd',name='reference'),
    meta(content='KmlToX3d.xslt',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='A Placemark with a Point has an icon associated with it that marks a point on the earth in the 3D viewer.',documentation='http://code.google.com/apis/kml/documentation/kml_tags_21.html#placemark',name='PlaceMark',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='id',type='SFString'),
        field(accessType='inputOutput',appinfo='Label for the object',name='name',type='MFString'),
        field(accessType='inputOutput',appinfo='User-supplied text that appears in the description balloon',name='description',type='SFString'),
        field(accessType='initializeOnly',appinfo='longitude latitude and altitude',name='coordinates',type='SFVec3d',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='A string value representing an unstructured address written as a standard street city state address and/or as a postal code.',name='address',type='MFString'),
        field(accessType='initializeOnly',appinfo='. Specifies whether the feature is drawn in the 3D viewer when it is initially loaded',name='visibility',type='SFBool',value=True),
        field(accessType='inputOnly',name='set_visibility',type='SFBool'),
        field(accessType='outputOnly',name='visibility_changed',type='SFBool'),
        #  TODO: is the 'open' parameter appropriate for X3D? Maintain value for round-trip conversions. 
        field(accessType='initializeOnly',appinfo='Specifies whether a Folder appears closed or open when first loaded',name='open',type='SFBool',value=True),
        #  TODO: need LookAt Prototype 
        field(accessType='initializeOnly',appinfo='A short description of the feature',name='snippet',type='MFString'),
        field(accessType='inputOnly',name='set_snippet',type='MFString'),
        field(accessType='outputOnly',name='snippet_changed',type='MFString'),
        #  TODO: AddressDetails, phoneNumber, TimePrimitive, styleUrl, StyleSelector, Region 
        #  TODO: Geometry prototypes for KML Point,LineString,LinearRing, Polygon,MultiGeometry,Model 
        field(accessType='inputOutput',appinfo='Shape or (KML) Point LineString LinearRing Polygon MultiGeometry Model',name='geometry',type='MFNode',
          #  default NULL node 
          ),
        field(accessType='inputOutput',appinfo='Default color for PlaceMark',name='diffuseColor',type='SFColor',value=(0.2,0.8,0.4)),
        field(accessType='inputOutput',name='metadata',type='SFNode',
          #  default NULL node 
          )]),
      ProtoBody=ProtoBody(
        #  TODO: is Switch needed to choose between balloon and provided geometry, or are both shown? 
        children=[
        Switch(DEF='SwitchVisible',whichChoice=0,
          children=[
          Anchor(
            IS=IS(
              connect=[
              connect(nodeField='url',protoField='address'),
              connect(nodeField='description',protoField='description')]),
            children=[
            GeoLocation(
              geoOrigin=GeoOrigin(
                IS=IS(
                  connect=[
                  connect(nodeField='geoCoords',protoField='coordinates')]))),
            Shape(DEF='PlaceMarkBalloon',
              geometry=Extrusion(creaseAngle=3.14,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.01,0.01),(0.03,0.03),(0.06,0.06),(0.09,0.09),(0.14,0.14),(0.23,0.23),(0.25,0.25),(0.23,0.23),(0.18,0.18),(0.1,0.1),(0.03,0.03)],spine=[(0,0,0),(0,0.12,0),(0,0.28,0),(0,0.4,0),(0,0.55,0),(0,0.65,0),(0,0.75,0),(0,0.85,0),(0,0.92,0),(0,0.98,0),(0,1.0,0)]),
              appearance=Appearance(
                material=Material(DEF='PlaceMarkMaterial',
                  IS=IS(
                    connect=[
                    connect(nodeField='diffuseColor',protoField='diffuseColor')])))),
            Transform(DEF='PlaceMarkName',translation=(0,1.2,0),
              children=[
              Shape(
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='name')]),
                  fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.2)),
                appearance=Appearance(
                  material=Material(USE='PlaceMarkMaterial')))]),
            Transform(DEF='SnippetTranslation',translation=(0,2.4,0),
              children=[
              Shape(
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='snippet')]),
                  fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.2)),
                appearance=Appearance(
                  material=Material(USE='PlaceMarkMaterial')))]),
            Group(DEF='GeometryGroup',
              IS=IS(
                connect=[
                connect(nodeField='children',protoField='geometry')]))])]),
        #  remaining nodes in ProtoBody are not rendered 
        WorldInfo(
          IS=IS(
            connect=[
            connect(nodeField='title',protoField='id')])),
        Group(DEF='MetadataHolderPlaceMark',
          IS=IS(
            connect=[
            connect(nodeField='metadata',protoField='metadata')])),
        Script(DEF='BehaviorScript',
          field=[
          field(accessType='initializeOnly',name='visibility',type='SFBool'),
          field(accessType='inputOnly',name='set_visibility',type='SFBool'),
          field(accessType='outputOnly',name='visibility_changed',type='SFBool'),
          field(accessType='outputOnly',name='visibilityChoice',type='SFInt32'),
          field(accessType='initializeOnly',name='open',type='SFBool'),
          field(accessType='initializeOnly',name='snippet',type='MFString'),
          field(accessType='inputOnly',name='set_snippet',type='MFString'),
          field(accessType='outputOnly',name='snippet_changed',type='MFString'),
          field(accessType='outputOnly',name='snippetOffset',type='SFVec3f')],
          IS=IS(
            connect=[
            connect(nodeField='visibility',protoField='visibility'),
            connect(nodeField='set_visibility',protoField='set_visibility'),
            connect(nodeField='visibility_changed',protoField='visibility_changed'),
            connect(nodeField='open',protoField='open'),
            connect(nodeField='snippet',protoField='snippet'),
            connect(nodeField='set_snippet',protoField='set_snippet'),
            connect(nodeField='snippet_changed',protoField='snippet_changed')])),
        ROUTE(fromField='visibilityChoice',fromNode='BehaviorScript',toField='whichChoice',toNode='SwitchVisible'),
        ROUTE(fromField='snippetOffset',fromNode='BehaviorScript',toField='set_translation',toNode='SnippetTranslation')])),
    ProtoDeclare(appinfo='A geographic location defined by longitude latitude and (required) altitude.',documentation='http://code.google.com/apis/kml/documentation/kml_tags_21.html#point',name='Point',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='id',type='SFString'),
        field(accessType='initializeOnly',appinfo='allowed values: clampToGround relativeToGround absolute',name='altitudeMode',type='SFString',value='clampToGround'),
        field(accessType='initializeOnly',name='coordinates',type='SFVec3d',value=(0,0,0)),
        field(accessType='inputOnly',name='set_coordinates',type='SFVec3d'),
        field(accessType='outputOnly',name='coordinates_changed',type='SFVec3d'),
        field(accessType='initializeOnly',name='extrude',type='SFBool',value=False),
        field(accessType='initializeOnly',name='tessellate',type='SFBool',value=False),
        field(accessType='inputOutput',name='metadata',type='SFNode',
          #  default NULL node 
          )]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='PointScript',
          field=[
          field(accessType='initializeOnly',name='altitudeMode',type='SFString'),
          field(accessType='initializeOnly',name='coordinates',type='SFVec3d'),
          field(accessType='inputOnly',name='set_coordinates',type='SFVec3d'),
          field(accessType='outputOnly',name='coordinates_changed',type='SFVec3d'),
          field(accessType='initializeOnly',name='extrude',type='SFBool'),
          field(accessType='initializeOnly',name='tessellate',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='altitudeMode',protoField='altitudeMode'),
            connect(nodeField='coordinates',protoField='coordinates'),
            connect(nodeField='set_coordinates',protoField='set_coordinates'),
            connect(nodeField='coordinates_changed',protoField='coordinates_changed'),
            connect(nodeField='extrude',protoField='extrude'),
            connect(nodeField='tessellate',protoField='tessellate')])),
        WorldInfo(
          IS=IS(
            connect=[
            connect(nodeField='title',protoField='id')])),
        Group(DEF='MetadataHolderPoint',
          IS=IS(
            connect=[
            connect(nodeField='metadata',protoField='metadata')]))])),
    #  ========== Examples ========== 
    Viewpoint(description='Placemark example',position=(0,0,4)),
    #  <?xml version="1.0" encoding="UTF-8"?> <kml xmlns="http://earth.google.com/kml/2.1"> <Placemark> <name>Simple placemark</name> <description>Attached to the ground. Intelligently places itself at the height of the underlying terrain.</description> <Point> <coordinates>-122.0822035425683,37.42228990140251,0</coordinates> </Point> </Placemark> </kml> 
    ProtoInstance(name='PlaceMark',
      fieldValue=[
      fieldValue(name='name',value=["Simple placemark"]),
      fieldValue(name='description',value='Attached to the ground. Intelligently places itself at the height of the underlying terrain.'),
      fieldValue(name='coordinates',value=(-122.0822035425683,37.42228990140251,0)),
      fieldValue(name='address',value=["https://www.web3d.org/x3d-earth"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for KmlPrototypes.py")
