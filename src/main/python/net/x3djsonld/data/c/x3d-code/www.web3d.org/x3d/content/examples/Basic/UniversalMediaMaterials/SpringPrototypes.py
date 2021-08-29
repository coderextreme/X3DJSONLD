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
    meta(content='SpringPrototypes.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringPrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SpringPrototypes.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring00',
      #  computed conversion ambientIntensity=2.226234, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.331633,0.296582,0.279057),shininess=0.979592,specularColor=(0.489796,0.396323,0.209378))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.864256,0.833788,0.330482),shininess=0.078125,specularColor=(0.095591,0.094025,0.06817))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring02',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253968,diffuseColor=(1.0,0.900511,0.314236),shininess=1.0,specularColor=(0.872449,0.247119,0.254214))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring03',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253968,diffuseColor=(1.0,0.854922,0.0),shininess=1.0,specularColor=(0.872449,0.247119,0.254214))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring04',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.904409,0.549305,0.224283),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring05',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25641,diffuseColor=(0.795918,0.505869,0.093315),shininess=0.97449,specularColor=(0.304961,0.131827,0.007887))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring06',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.904409,0.457768,0.341109),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring07',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254777,diffuseColor=(0.799639,0.256286,0.158549),shininess=0.071429,specularColor=(0.20373,0.083248,0.083248))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring08',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254777,diffuseColor=(0.799639,0.326749,0.241687),shininess=0.928571,specularColor=(0.891318,0.364211,0.364211))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring09',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248649,diffuseColor=(1.0,0.452381,0.40339),shininess=0.902703,specularColor=(0.686486,0.396903,0.419275))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring10',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254777,diffuseColor=(0.799639,0.081343,0.125842),shininess=0.959184,specularColor=(0.913265,0.373179,0.373179))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring11',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254777,diffuseColor=(0.685208,0.089314,0.027172),shininess=0.959184,specularColor=(0.913265,0.373179,0.373179))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring12',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254777,diffuseColor=(0.685208,0.134679,0.332385),shininess=0.071429,specularColor=(0.122449,0.050035,0.050035))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring13',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.904409,0.315531,0.544386),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring14',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.237501,diffuseColor=(0.484848,0.377104,0.433123),shininess=0.024242,specularColor=(0.436364,0.243939,0.298678))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring15',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.894461,0.382776,0.904409),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring16',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243903,diffuseColor=(0.630959,0.368649,0.745454),shininess=0.090909,specularColor=(0.278788,0.278788,0.278788))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring17',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253732,diffuseColor=(0.355416,0.133428,0.350088),shininess=0.107143,specularColor=(0.680294,0.314997,0.841837))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring18',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.252525,diffuseColor=(0.432445,0.200235,0.535135),shininess=0.567568,specularColor=(0.30577,0.141581,0.378378))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring19',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.258064,diffuseColor=(0.348585,0.345407,0.613468),shininess=0.612245,specularColor=(0.380859,0.353232,0.890218))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring20',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.258064,diffuseColor=(0.453686,0.462806,0.613468),shininess=0.043243,specularColor=(0.101243,0.093899,0.091415))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring21',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.278066,0.283655,0.375996),shininess=0.043243,specularColor=(0.248796,0.253797,0.336418))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring22',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.35102,0.255782,0.732203),shininess=0.07027,specularColor=(0.374738,0.273065,0.781677))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring23',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.35102,0.255782,0.732203),shininess=0.07027,specularColor=(0.101986,0.074315,0.212735))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring24',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.455896,0.749706,0.904409),shininess=0.078125,specularColor=(0.095591,0.095591,0.095591))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring25',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.261641,0.748016,0.725916),shininess=0.593939,specularColor=(0.490909,0.490909,0.490909))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring26',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.247423,diffuseColor=(0.130807,0.502591,0.479904),shininess=0.056995,specularColor=(0.330429,0.336788,0.23505))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring27',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.247423,diffuseColor=(0.130807,0.502591,0.479904),shininess=0.585492,specularColor=(0.330429,0.336788,0.23505))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring28',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.244898,diffuseColor=(0.016408,0.299131,0.281455),shininess=0.25,specularColor=(0.479592,0.428903,0.403559))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring29',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.244898,diffuseColor=(0.016408,0.299131,0.281455),shininess=0.086735,specularColor=(0.168367,0.150572,0.141675))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring30',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243055,diffuseColor=(0.040299,0.592577,0.305278),shininess=0.678571,specularColor=(0.044728,0.612254,0.084303))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring31',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243243,diffuseColor=(0.37066,0.672727,0.369066),shininess=0.909091,specularColor=(0.355787,0.642424,0.355787))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring32',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254777,diffuseColor=(0.215415,0.533093,0.177391),shininess=0.071429,specularColor=(0.0,0.272814,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring33',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254777,diffuseColor=(0.215415,0.533093,0.177391),shininess=0.076531,specularColor=(0.0,0.591097,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Spring34',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.280488,diffuseColor=(0.0,0.49697,0.0),shininess=0.109091,specularColor=(0.585714,0.6,0.0))])),
    Anchor(description='click for examples',parameter=["target=_blank"],url=["SpringExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringExamples.x3d","SpringExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SpringExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["SpringExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","SpringExamples.x3d"],
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

print ("python x3d.py load successful for SpringPrototypes.py")
