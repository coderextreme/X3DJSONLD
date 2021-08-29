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
    meta(content='TropicalPrototypes.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalPrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TropicalPrototypes.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical00',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.877539,0.904409,0.0),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748014,0.62085,0.0),shininess=0.939394,specularColor=(0.860606,0.860606,0.860599))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical02',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.904409,0.774741,0.083067),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical03',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748016,0.555721,0.0),shininess=0.606061,specularColor=(0.836364,0.836364,0.836364))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical04',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.904409,0.412258,0.0),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical05',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748016,0.299537,0.0),shininess=0.921212,specularColor=(0.836364,0.836364,0.836364))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical06',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.904409,0.283754,0.0),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical07',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748016,0.139569,0.0),shininess=0.478788,specularColor=(0.709091,0.709091,0.709091))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical08',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.904409,0.150314,0.0),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical09',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.877539,0.904409,0.0),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical10',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.904409,0.0,0.309851),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical11',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748016,0.006259,0.251931),shininess=0.933333,specularColor=(0.684848,0.684848,0.684848))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical12',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.904409,0.046947,0.496108),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical13',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.748016,0.0,0.550351),shininess=0.230303,specularColor=(0.672727,0.672727,0.672727))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical14',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.895967,0.0,0.691271),shininess=0.078125,specularColor=(0.095591,0.086256,0.093458))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical15',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.624368,0.0,0.748016),shininess=0.557576,specularColor=(0.951515,0.951515,0.951515))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical16',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.62178,0.020917,0.880181),shininess=0.078125,specularColor=(0.087726,0.069438,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical17',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.374008,0.0,0.748016),shininess=0.406061,specularColor=(0.909091,0.909091,0.909091))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical18',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.279501,0.005142,0.845907),shininess=0.078125,specularColor=(0.052278,0.031298,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical19',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.002317,0.0,0.748016),shininess=0.830303,specularColor=(0.884848,0.884848,0.884848))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical20',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.0,0.204955,0.845242),shininess=0.078125,specularColor=(0.03017,0.046033,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical21',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.020732,0.339645,0.748016),shininess=0.927273,specularColor=(0.90303,0.90303,0.90303))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical22',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.0,0.596985,0.817956),shininess=0.078125,specularColor=(0.0,0.069767,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical23',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.0,0.631244,0.748016),shininess=0.642424,specularColor=(0.915152,0.915152,0.915152))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical24',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.0,0.817956,0.553836),shininess=0.078125,specularColor=(0.0,0.095591,0.064724))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical25',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.0,0.748016,0.469403),shininess=0.818182,specularColor=(1.0,1.0,1.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical26',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.053153,0.817956,0.088018),shininess=0.078125,specularColor=(0.006212,0.095591,0.010286))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical27',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.0,0.748016,0.176015),shininess=0.721212,specularColor=(0.981818,0.981818,0.981818))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical28',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.355377,0.817956,0.015797),shininess=0.078125,specularColor=(0.041531,0.095591,0.001846))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical29',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.381944,0.748016,0.0),shininess=0.981818,specularColor=(0.963636,0.963636,0.963636))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical30',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.991732,0.939493,1.0),shininess=0.0)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical31',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.425062,0.404868,0.426289),shininess=0.90303,specularColor=(0.860606,0.860606,0.860606))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical32',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.249999,diffuseColor=(0.424238,0.424238,0.424238),shininess=0.153696,specularColor=(0.168,0.168,0.168))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical33',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.152381,0.145141,0.15282),shininess=0.957576,specularColor=(0.745455,0.745455,0.745455))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Tropical34',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.138667,0.138667,0.138667),shininess=0.153696,specularColor=(0.168,0.168,0.168))])),
    Anchor(description='click for examples',parameter=["target=_blank"],url=["TropicalExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalExamples.x3d","TropicalExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/TropicalExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["TropicalExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","TropicalExamples.x3d"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TropicalPrototypes.py")
