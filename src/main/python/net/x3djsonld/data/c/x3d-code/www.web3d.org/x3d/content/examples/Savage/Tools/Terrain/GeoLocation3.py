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
    meta(content='GeoLocation3.x3d',name='title'),
    meta(content='GeoLocation node that can automatically determine elevation and orientation to place object on terrain',name='description'),
    meta(content='Brian Hittner, CPT, U.S.A.',name='creator'),
    meta(content='Xeena VRML importer with significant manual corrections',name='translator'),
    meta(content='7 October 2003',name='created'),
    meta(content='7 October 2003',name='translated'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Tools/Terrain/GeoLocation3.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='GeoLocation3',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='geoOrigin',type='SFNode',
          #  NULL 
          ),
        field(accessType='initializeOnly',name='geoSystem',type='MFString',value=["GD","WE"]),
        field(accessType='initializeOnly',name='geoCoords',type='SFString'),
        field(accessType='initializeOnly',name='children',type='MFNode'),
        field(accessType='initializeOnly',name='autoElevation',type='SFBool',value=False),
        field(accessType='initializeOnly',name='autoSurfaceOrientation',type='SFBool',value=False),
        field(accessType='initializeOnly',name='debug',type='SFBool',value=False),
        field(accessType='inputOnly',name='set_geoCoords',type='SFString'),
        field(accessType='outputOnly',name='geoCoords_changed',type='SFString'),
        field(accessType='inputOnly',name='set_autoElevation',type='SFBool'),
        field(accessType='outputOnly',name='autoElevation_changed',type='SFBool'),
        field(accessType='inputOnly',name='set_autoSurfaceOrientation',type='SFBool'),
        field(accessType='outputOnly',name='autoSurfaceOrientation_changed',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='GEOLOC_NODE',
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='children')])),
        Script(DEF='GEOLOC_SCRIPT',directOutput=True,url=["GeoLocation3.class","https://savage.nps.edu/Savage/Tools/Terrain/GeoLocation3.class"],
          field=[
          field(accessType='initializeOnly',name='geoOrigin',type='SFNode',
            #  initialization node (if any) goes here 
            ),
          field(accessType='initializeOnly',name='geoSystem',type='MFString'),
          field(accessType='initializeOnly',name='geoCoords',type='SFString'),
          field(accessType='initializeOnly',name='transform',type='SFNode',
            children=[
            Transform(USE='GEOLOC_NODE')]),
          field(accessType='initializeOnly',name='autoElevation',type='SFBool'),
          field(accessType='initializeOnly',name='autoSurfaceOrientation',type='SFBool'),
          field(accessType='initializeOnly',name='debug',type='SFBool'),
          field(accessType='inputOnly',name='set_geoCoords',type='SFString'),
          field(accessType='outputOnly',name='geoCoords_changed',type='SFString'),
          field(accessType='inputOnly',name='set_autoElevation',type='SFBool'),
          field(accessType='outputOnly',name='autoElevation_changed',type='SFBool'),
          field(accessType='inputOnly',name='set_autoSurfaceOrientation',type='SFBool'),
          field(accessType='outputOnly',name='autoSurfaceOrientation_changed',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='geoOrigin',protoField='geoOrigin'),
            connect(nodeField='geoSystem',protoField='geoSystem'),
            connect(nodeField='geoCoords',protoField='geoCoords'),
            connect(nodeField='autoElevation',protoField='autoElevation'),
            connect(nodeField='autoSurfaceOrientation',protoField='autoSurfaceOrientation'),
            connect(nodeField='debug',protoField='debug'),
            connect(nodeField='set_geoCoords',protoField='set_geoCoords'),
            connect(nodeField='geoCoords_changed',protoField='geoCoords_changed'),
            connect(nodeField='set_autoElevation',protoField='set_autoElevation'),
            connect(nodeField='autoElevation_changed',protoField='autoElevation_changed'),
            connect(nodeField='set_autoSurfaceOrientation',protoField='set_autoSurfaceOrientation'),
            connect(nodeField='autoSurfaceOrientation_changed',protoField='autoSurfaceOrientation_changed')]))]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GeoLocation3.py")
